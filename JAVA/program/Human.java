

public class Human {
    // Attribut protected, untuk diwariskan
    protected String nik;
    protected String nama;
    protected String jenis_kelamin;

    // Parameterized constructor
    public Human(String nik, String nama, String jenis_kelamin) {
        this.nik = nik;
        this.nama = nama;
        this.jenis_kelamin = jenis_kelamin;
    };

    // Setter and Getter
    public void setNik(String nik) {
        this.nik = nik;
    }
    public String getNik() {
        return this.nik;
    }
    public void setNama(String nama) {
        this.nama = nama;
    }
    public String getNama() {
        return this.nama;
    }
    public void setJenisKelamin(String jenis_kelamin) {
        this.jenis_kelamin = jenis_kelamin;
    }
    public String getJenisKelamin() {
        return this.jenis_kelamin;
    }
    public void eat() {
        System.out.println(this.nama + " is Eating");
    }

    public void sleep() {
        System.out.println(this.nama + " is sleeping... (zzz)");
    }

}
