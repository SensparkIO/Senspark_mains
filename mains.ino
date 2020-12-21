
    #include <senspark_mains.h>
    senspark_mains spark;

    String ssid = "SSID";   //Replace with your SSID
    String pass = "PASSWORD";   //Replace with your Passsword
    String ApiKey = "ApiKey";  // Replace with ApiKey provided while creating new project
    String AccessToken = "AccessToken";  // Replace with AccessToken provided while creating new project
    void setup(){
      Serial.begin(115200);
    }
    void loop(){
      if(spark.initialize(ssid, pass))
      {
        spark.activate(ApiKey, AccessToken);
      }
  }
    
