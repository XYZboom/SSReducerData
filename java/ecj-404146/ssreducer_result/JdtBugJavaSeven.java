import java.io.*;

public final class JdtBugJavaSeven {

    public static final void main() {

        try {

            try {

                try {

                    try {
                            ((BufferedReader) null).readLine();
                        } catch (final IOException e) {}

                } finally {

                    try {
                        ((BufferedReader) null).close();
                    } catch (final IOException e) {
                        return;
                    }

                }

            } finally {

                try {
                    ((InputStreamReader) null).close();
                } catch (final IOException e) {}

            }

        } finally {

            }

    }

}