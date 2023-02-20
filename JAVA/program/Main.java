
import java.util.Vector;

public class Main {
        // vector of objects Mahasiswa
        static private Vector<Mahasiswa> listMhs = new Vector<Mahasiswa>();

        public static void main(String[] args) {
                // Labels for data display
                String[] label = { "NIK", "Nama", "Jenis Kelamin", "Fakultas", "Prodi", "Asal Universitas",
                                "Email Edu",
                                "NIM" };

                // Data dummy
                Mahasiswa ojan = new Mahasiswa("10 50 24 170890 0001", "Fauzan", "Laki-laki",
                                "Universitas_Pendidikan_Indonesia", "ojan@upi.edu",
                                "2100137",
                                "FPMIPA",
                                "Ilmu Komputer");

                Mahasiswa maul = new Mahasiswa("14 50 56 570890 0003", "maul", "Laki-laki",
                                "Institut_Teknologi_Bandung", "maul@itb.ac.id",
                                "1535481222",
                                "FPMIPA",
                                "Ilmu Komputer");

                Mahasiswa reyhan = new Mahasiswa("12 60 34 140990 0004", "Reyhan", "Laki-laki",
                                "Telkom_University", "reyhan@telkom.edu",
                                "20213623",
                                "DPR",
                                "Digital_Public_Relation");

                // Push the object onto the listMhs
                listMhs.add(ojan);
                listMhs.add(maul);
                listMhs.add(reyhan);

                // Intantiate the Utilities class
                Utilities program = new Utilities(listMhs);

                program.displayData(label);

        }
}