using System;
using System.Timers;
namespace MyNamespace {
    public class TestDelegate {
        private Timer timer;
        public delegate void MyCallback(int i, String s);
        public event MyCallback OnMyCallback;
        public TestDelegate() {
            timer = new Timer();
            timer.Interval = 2000; // 2 seconds
            timer.Elapsed += new ElapsedEventHandler(timer_Elapsed);
        }
        public void start() {
            timer.Start();
        }
        private void timer_Elapsed(object sender, ElapsedEventArgs e) {
            timer.Stop();
            if (OnMyCallback != null) {
                OnMyCallback(42, "ceci est une string");
            }
        }
    }
}
