use strict;
use warnings;

my $unit=1;
my $usedMemAr;
my $freeMemAr;

# output file name
#my $fout = 'memOut.txt';
my $fout = 'SIT_rack_memory_out.txt';
open(FILE,">> $fout") or die "Could not open output file $fout: $!";


# For input file name
my $file = $ARGV[1];
open my $fh, '<', $file or die "Could not open Input file $file: $!";

##########################
# input file name
open my $fIn, '+<', $file or die "Could not open $file $!";

print "\nFile $file \nMemory (in KByte):\n";
print FILE "\nFile $file \nMemory (in KByte):\n";


Memory($fIn, $file);

####################
# Finish all files then close the output file
close $fout;


##################################################################################################
# Sub function place is below this line
##################################################################################################

##################################################################################################
sub Memory
{
    my $fileIn = shift;
    my $fileOut = shift;
    
    my $Mem;
    my $usedMem=0;
    my $usedMemTot=0;
    my $usedMemAvg=0;
    my $usedMemCount=0;

    my $freeMem=0;
    my $freeMemTot=0;
    my $freeMemAvg=0;
    my $freeMemCount=0; 
    
    my $totMem = 0;
    my $memCount = 0;
    
    
    print "\nInside Memory function\n";
    while (my $line = <$fIn>) {
    
      if($line =~ /Mem:/){
         $Mem = $line;
         
         # print "Memory Line: $Mem\n";
         # print FILE "Memory Line: $Mem\n";
            
         if($Mem =~ m/Mem:(.*)/) {
            #print "Memory (in KByte): $1\n";
            #print FILE "Memory (in KByte): $1\n";
            
            my $memAll = $1;
            # print "Memory (in KByte): $memAll\n";
            # print FILE "Memory (in KByte): $memAll\n";
            
            my @list = ($memAll =~ /(\d+)/g);  # put the number into list or array.
            #print join "\n", @list;
             $totMem = $list[0];
             $usedMem = $list[1];
             $freeMem = $list[2];
          
             $usedMemTot=$usedMemTot+$usedMem;
             $freeMemTot=$freeMemTot+$freeMem;
             $memCount++;
          
             print "memCount: $memCount ; totmem: $totMem ; usedMem = $usedMem ; freeMem: $freeMem\n";
             print FILE "memCount: $memCount ; totmem: $totMem ; usedMem = $usedMem ; freeMem: $freeMem\n";
             
          
         }  #if($Mem =~ m/Mem:(.*)/)  $memCount
      }  #if($line =~ /Mem/)             
    } #while (my $line = <$fh>)
  
    # Calculate average
    $usedMemAvg = $usedMemTot / $memCount;
    $freeMemAvg = $freeMemTot / $memCount;
    
    #print "File: $file\n";
    if($file =~ /^A/)
    {                      
       $usedMemAr = int($usedMemAvg);
       $freeMemAr = int($freeMemAvg);
       
       print "Average Used Memory =  $usedMemAr \n";;   # Dereferencing it lets you access the array
       print "Average Free Memory =  $freeMemAr \n";
         
       print FILE "Average Used Memory =  $usedMemAr \n";   # Dereferencing it lets you access the array
       print FILE "Average Free Memory =  $freeMemAr \n";
       
       print "DSR 830 unit \n";
       print FILE "DSR 830 unit \n";
       
       $unit++;
    }
    
    if($file =~ /^B/)
    {
       if($unit>16)
       {
           $unit=1;
       }       
       
       $usedMemAr = int($usedMemAvg);
       $freeMemAr = int($freeMemAvg);
       
       print "Average Used Memory =  $usedMemAr \n";;   # Dereferencing it lets you access the array
       print "Average Free Memory =  $freeMemAr \n";
       
       print FILE "Average Used Memory =  $usedMemAr \n";   # Dereferencing it lets you access the array
       print FILE "Average Free Memory =  $freeMemAr \n";
       
       print "DSR 800 unit \n";
       print FILE "DSR 800 unit \n";
       
       $unit++;
    }                        
      
}
##################################################################################################