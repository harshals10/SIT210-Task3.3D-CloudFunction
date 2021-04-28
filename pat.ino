int bulb = D7; 
void setup() 
{ pinMode(bulb, OUTPUT); }
void loop() 
{
    if(Particle.publish("Deakin_RIOT_SIT210_Photon_Buddy", "pat")==true)
    {
        for(int i=0;i<2;i++)
        {
            digitalWrite(bulb, HIGH);
            delay(500);
            digitalWrite(bulb, LOW);
            delay(500);
        }
    }
    delay(10000);
}