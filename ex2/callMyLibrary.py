import ctypes

import platform
suffix = 'so'
if platform.system() == 'Windows':
	suffix = 'dll'
elif platform.system() == 'Darwin':
	suffix = 'dylib'

lib = ctypes.CDLL('libmyLibrary.' + suffix)
lib.sayHello()

