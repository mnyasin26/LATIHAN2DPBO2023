class Human:
    _nik = ""
    _nama = ""
    _jenis_kelamin = ""

    def __init__(self, nik = "", nama = "", jenis_kelamin = ""):
        self._nik = nik
        self._nama = nama
        self._jenis_kelamin = jenis_kelamin
    
    def setNik(self, nik):
        self._nik = nik
    
    def getNik(self):
        return self.nik
    
    def setNama(self, nama):
        self._nama = nama
    
    def getNama(self):
        return self.nama
    
    def setJenisKelamin(self, jenis_kelamin):
        self._jenis_kelamin = jenis_kelamin
    
    def getJenisKelamin(self):
        return self.jenis_kelamin
    
    def eat(self):
        print(self.nama + " is Eating")
    

    def sleep(self):
        print(self.nama + " is sleeping... (zzz)")
    