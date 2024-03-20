public class CPU
{
class Processor
{
void info(int cores,String manufacturer)
{
System.out.println("\n_PROCESSOR INFORMATION_");
System.out.println("No.of cores="+cores+"\nmanufacturer Name="+manufacturer);
}
}
static class RAM
{
void info(double memory,String manufacturer)
{
System.out.println("\n_RAM INFORMATION_");
System.out.println("Memory="+memory+"GB\n"+"Manufacturer name="+manufacturer);
}
}
public static void main(String[] args){
CPU cpu = new CPU();
CPU.Processor processor=cpu.new Processor();
CPU.RAM ram = new CPU.RAM();
processor.info(12,"intel");
ram.info(126,"dell");
}
}
