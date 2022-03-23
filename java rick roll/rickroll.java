package hero.com;

import java.io.IOException;

public class Main {
    public static void main(String[] args) {
        int i = 2;
        while(i>1) {
            try {
                String url = "https://www.youtube.com/watch?v=dQw4w9WgXcQ"; // You can use any url, but don't do bad thing.
                java.net.URI uri = java.net.URI.create(url);
                java.awt.Desktop dp = java.awt.Desktop.getDesktop(); //Try to find your browser, if you have.
                if (dp.isSupported(java.awt.Desktop.Action.BROWSE)) {
                    dp.browse(uri);
                }
            } catch (NullPointerException | IOException e) {
                e.printStackTrace();
            }
            i ++;
            if(i == 30){ //The smaller the number, the less the delay in opening the URL will be.
                break;
            }
        }
    }
}
