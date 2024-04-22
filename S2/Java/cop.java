

import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;


public class cop{

    public static void main(String[] args) throws IOException {



        FileInputStream fileinput = new FileInputStream("pr1.txt");

        FileOutputStream fileoutput = new FileOutputStream("pr2.txt");

        int i;
        while ((i = fileinput.read()) != -1) {
            fileoutput.write(i);
        }
        System.out.println("Successfully copied ");
        fileinput.close();
        fileoutput.close();
    }
}

