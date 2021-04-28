int bulb = D7; 
void setup() 
{ pinMode(bulb, OUTPUT); }
void loop() 
{
    if(Particle.publish("Deakin_RIOT_SIT210_Photon_Buddy", "wave")==true)
    {
        for(int i=0;i<3;i++)
        {
            digitalWrite(bulb, HIGH);
            delay(1000);
            digitalWrite(bulb, LOW);
            delay(1000);
        }
    }
    delay(10000);
}