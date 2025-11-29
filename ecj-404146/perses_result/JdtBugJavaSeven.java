import java.io.BufferedReader;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.InputStreamReader;
             class JdtBugJavaSeven {
                        void main(                   ) {
              File f = new File("file_to_read");
              FileInputStream fis;
        try {
            fis = new FileInputStream(f);
        } catch (      FileNotFoundException e) {
            return;
        }
        try {
                  InputStreamReader isr = new InputStreamReader(fis                          );
            try {
                      BufferedReader br = new BufferedReader(isr);
            } finally {
                try {
                    isr.close();
                } catch (      IOException e) {
                    return;
                }
            }
        } finally {
            try {
                fis.close();
            } catch (      IOException e) {
            }
        }
    }
}
