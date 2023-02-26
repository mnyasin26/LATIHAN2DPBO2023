from Human import Human

class SivitasAkademik(Human) :
    # Attribut protected, untuk diwariskan
    _asal_universitas = ""
    _email_edu = ""

    # Constructor
    def __init__(self, nik, nama, jenis_kelamin, asal_universitas, email_edu) :
        self._asal_universitas = asal_universitas
        self._email_edu = email_edu
    

    # Just in case testing the class attribute
