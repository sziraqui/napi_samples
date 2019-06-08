{
    'targets' : [
        {
            'target_name': 'addon',
            'clfags!': [
                '-fno-exceptions'
            ],
            'cflags_cc!': [
                '-fno-exceptions'
            ],
            'sources': [
                'src/main.cpp',
                'src/funcs.cpp',
                'src/napiextratypes.cpp'
            ],
            'include_dirs': [
                '<!@(node -p "require(\'node-addon-api\').include")',
            ],
            'libraries': [],
            'dependencies': [
                '<!(node -p "require(\'node-addon-api\').gyp")'
            ],
            'defines': [
                'NAPI_DISABLE_CPP_EXCEPTIONS'
            ]

        }
    ]
}