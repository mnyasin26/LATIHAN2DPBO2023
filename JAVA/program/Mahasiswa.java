
public class Mahasiswa extends SivitasAkademik {
    // Attribut protected, untuk diwariskan
    protected String nim;
    protected String fakultas;
    protected String prodi;

    public Mahasiswa(String nik, String nama, String jenis_kelamin, String asal_universitas, String email_edu,
            String nim, String fakultas, String prodi) {
        super(nik, nama, jenis_kelamin, asal_universitas, email_edu);
        this.nim = nim;
        this.fakultas = fakultas;
        this.prodi = prodi;
    }

    // retrive all Attributes
    public String[] getAllAttribute() {
        String[] temp = { this.nik, this.nama, this.jenis_kelamin, this.fakultas, this.prodi, this.asal_universitas,
                this.email_edu, this.nim};
        return temp;
    }

    // Just in case testing the class attribute
    public void introduce() {
        System.out.print("Halo saya " + this.nama + " mahasiswa dari perguruan tinggi " + this.asal_universitas
                + ", saya mengambil jurusan " + this.prodi + " yang berada di fakultas " + this.fakultas
                + ". NIM saya adalah " + this.nim);
    }
}
