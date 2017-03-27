package com.zq.btplayer;

import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;
import android.util.Log;

import com.zq.common.MyConfig;

import java.io.File;

public class MainActivity extends AppCompatActivity {

    static {
        System.loadLibrary("native-lib");
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        String torrentPath = MyConfig.EX_PATH + "/test.torrent";
        Log.e("zq", "wwww " + torrentPath);
        File file = new File(torrentPath);
        if(file.exists()) {
            Log.e("zq", "file len " + file.length());
            Log.e("zq", "mmmmmm " + file.canRead() + " ttt " + file.canWrite());
        } else {
            Log.e("zq", "errrr");
        }
        parseTorrent(torrentPath);
    }

    //test zgqqq
    public native String stringFromJNI();
    public native int parseTorrent(String path);
}
