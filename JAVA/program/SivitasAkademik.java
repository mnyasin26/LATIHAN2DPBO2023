

public class SivitasAkademik extends Human {
    // Attribut protected, untuk diwariskan
    protected String asal_universitas;
    protected String email_edu;

    // Constructor
    public SivitasAkademik(String nik, String nama, String jenis_kelamin, String asal_universitas, String email_edu) {
        super(nik, nama, jenis_kelamin);
        this.asal_universitas = asal_universitas;
        this.email_edu = email_edu;
    }

    // Just in case testing the class attribute
    public void introduce() {
        System.out.print("Halo saya " + this.nama + " sivitas akademik dari " + this.asal_universitas
                + ", jika ingin menghubungi saya kontak di " + this.email_edu);
    }
}
