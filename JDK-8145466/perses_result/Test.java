import java.util.TimerTask;
       class Test {
                            void start(                       long flushInterval) {
                TimerTask t = new TimerTask() {
                    public void run() {
                        invokeAll(flushInterval);
                    }
                };
        }
                             void invokeAll(int flushInterval) {
        }
}
