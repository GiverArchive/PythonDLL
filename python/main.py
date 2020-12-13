from ctypes import *
import settings

lib = cdll.LoadLibrary(settings.lib_path)

lib.showMessage()