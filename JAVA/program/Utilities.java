
import java.util.Vector;

public class Utilities {
    private Vector<Mahasiswa> listMhs = new Vector<Mahasiswa>();// <-- vector of Mahasiswa instance


    // contructor definition
    public Utilities(Vector<Mahasiswa> source) {
        this.listMhs = source;
    }

    // diplay in list format
    public void displayData(String[] label) {
        int index = 1;
        
        for (Mahasiswa n : this.listMhs) {
            System.out.println("=== Data Mhs: " + Integer.toString(index) + " ===");
            int index2 = 0;
            for (String att : n.getAllAttribute()) {

                System.out.println(label[index2] + ": " + att);
                index2++;
            }
            index++;
        }
    }
}
