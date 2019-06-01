{
    'targets': [                         # list of build configs
        {
            'target_name': 'classAddon', # name of module in require call
            'sources' : [                # list of source files
                'src/main.cpp',
                'src/myclass.cpp',
                'src/myclassbind.cpp'
            ],
            'cflags!': [                # cflags to exclude
                '-fnoexceptions',
            ],
            'cflags_cc!': [             # cpp flags to exclude
                '-fnoexceptions',
            ],
            'include_dirs' : [          # list of external include paths
                '<!@(node -p "require(\'node-addon-api\').include")',  # <! is for command, @ is to expand returned output lines to list
            ],
            'libraries': [],            # list of external lib paths
            'dependencies' : [
                '<!@(node -p "require(\'node-addon-api\').gyp")'       
            ],
            'defines': [
                'NAPI_DISABLE_CPP_EXCEPTIONS',
            ],
        }
    ]
}