import static java.lang.Integer.parseInt;
import javax.swing.*;
public class IpAddressClassDetection {
    public static void main(String arg[])
    {
        String s= JOptionPane.showInputDialog(null,"Enter IP Address");
        String ars[]=s.split("\\.");
        int j=0;
        for(int k=0;k<4;k++){
        if(ars.length!=4)
        {
            j=1;
            break;
        }
        int d=parseInt(ars[k]);
        if(d>255)
        {
            j=1;
            break;
        }
        }
        if(j==0){
        int i=parseInt(ars[0]);
        if (i<=127)
        {
            JOptionPane.showMessageDialog(null,"IP Address of Class A");
        }
        else if(i<=191)
        {
            JOptionPane.showMessageDialog(null,"IP Address of Class B");
        }
        else if(i<=223)
        {
            JOptionPane.showMessageDialog(null,"IP Address of Class C");
        }
        else if(i<=241)
        {
            JOptionPane.showMessageDialog(null,"IP Address of Class D");
        }
        else
        {
            JOptionPane.showMessageDialog(null,"IP Address of Class E");
        }
        }
        else
        {
            JOptionPane.showMessageDialog(null,"Invalid IP address");
        }
    }
}
