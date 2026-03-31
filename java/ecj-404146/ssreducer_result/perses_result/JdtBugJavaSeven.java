import java.io.*;
             class JdtBugJavaSeven {
                        void main()
            {
            try {
                try {
                    try {
                            ((BufferedReader) null).readLine();
                        } catch (      IOException e) {}
                } finally {
                    try {
                        ((BufferedReader) null).close();
                    } catch (      IOException e) {
                        return;
                    }
                }
            } finally {
                                              {}
            }
        }
}
