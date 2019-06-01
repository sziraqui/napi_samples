{
    'variables': {
                'cv_ver' : '3.4.0',
            },
    'targets': [
        {
            'target_name': 'VideoStreamer',
            'cflags!': [
                '-fnoexceptions',
            ],
            'cflags_cc!': [
                '-fnoexceptions',
            ],
            'include_dirs' : [
                '<!@(node -p "require(\"node-addon-api\").include")',
                '<!@(pkg-config --cflags opencv)',
            ],
            'libraries': [
                '<!@(pkg-config --libs opencv)',
            ],
            'conditions': [
                'OS="linux"',
                {
                    'cflags': [
                        '<!@(pkg-config --cflags opencv)',
                        '-Wall',
                    ]
                }
            ],
            'defines': [
                'NAPI_DISABLE_CPP_EXCEPTIONS',
            ],
        }
    ]
}