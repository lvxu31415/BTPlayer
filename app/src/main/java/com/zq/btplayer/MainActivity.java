package com.zq.btplayer;

import android.os.Environment;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.util.Log;

public class MainActivity extends AppCompatActivity {

    static {
        System.loadLibrary("native-lib");
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        Log.e("zq", "cccc" + Environment.getExternalStorageDirectory().getAbsolutePath());
        Log.e("zq", "aaaaa " + stringFromJNI());
    }

    public native String stringFromJNI();
}
