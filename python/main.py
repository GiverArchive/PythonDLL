from ctypes import *
import settings

lib = cdll.LoadLibrary(settings.lib_path)

lib.maxValue(10, 14)

title = 'Camisa boa'.encode('UTF-8')
desc = 'Vende-se camisa boa yeye'.encode('UTF-8')

lib.showMessage(c_char_p(title), c_char_p(desc))

