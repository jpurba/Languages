use strict;
use warnings;

##############################
# Global Variable for DSR 830
##############################
my $count830=0;      # unit count

##############################
# Global Variable for DSR 800
##############################
my $count800=0;      # unit count

my $unit=1;
my @usedMemArA = [1 .. 16];  # Shelf A
my @freeMemArA = [1 .. 16];  # Shelf A
my @usedMemArB = [1 .. 16];  # Shelf B
my @freeMemArB = [1 .. 16];  # Shelf B

# output file name
#my $fout = 'memOut.txt';
my $fout = 'SIT_rack_memory.txt';
open(FILE,">> $fout") or die "Could not open $fout: $!";

####################
#  DSR 830 Start
####################
##########################
# input file name
my $file = 'A01.txt';
open my $fIn, '+<', $file or die "Could not open $file $!";

print "\nFile $file \nMemory (in KByte):\n";
print FILE "\nFile $file \nMemory (in KByte):\n";

Memory($fIn, $file);
$count830++;

##########################
# input file name
$file = 'A02.txt';
open $fIn, '+<', $file or die "Could not open $file: $!";

print "\nFile $file \nMemory (in KByte):\n";
print FILE "\nFile $file \nMemory (in KByte):\n";

Memory($fIn, $file);
$count830++;

##########################
# input file name
$file = 'A03.txt';
open $fIn, '+<', $file or die "Could not open $file: $!";

print "\nFile $file \nMemory (in KByte):\n";
print FILE "\nFile $file \nMemory (in KByte):\n";

Memory($fIn, $file);
$count830++;

##########################
# input file name
$file = 'A04.txt';
open $fIn, '+<', $file or die "Could not open $file: $!";

print "\nFile $file \nMemory (in KByte):\n";
print FILE "\nFile $file \nMemory (in KByte):\n";

Memory($fIn, $file);
$count830++;

##########################
# input file name
$file = 'A05.txt';
open $fIn, '+<', $file or die "Could not open $file: $!";

print "\nFile $file \nMemory (in KByte):\n";
print FILE "\nFile $file \nMemory (in KByte):\n";

Memory($fIn, $file);
$count830++;

##########################
# input file name
$file = 'A06.txt';
open $fIn, '+<', $file or die "Could not open $file: $!";

print "\nFile $file \nMemory (in KByte):\n";
print FILE "\nFile $file \nMemory (in KByte):\n";

Memory($fIn, $file);
$count830++;

##########################
# input file name
$file = 'A07.txt';
open $fIn, '+<', $file or die "Could not open $file: $!";

print "\nFile $file \nMemory (in KByte):\n";
print FILE "\nFile $file \nMemory (in KByte):\n";

Memory($fIn, $file);
$count830++;

##########################
# input file name
$file = 'A08.txt';
open $fIn, '+<', $file or die "Could not open $file: $!";

print "\nFile $file \nMemory (in KByte):\n";
print FILE "\nFile $file \nMemory (in KByte):\n";

Memory($fIn, $file);
$count830++;

##########################
# input file name
$file = 'A09.txt';
open $fIn, '+<', $file or die "Could not open $file: $!";

print "\nFile $file \nMemory (in KByte):\n";
print FILE "\nFile $file \nMemory (in KByte):\n";

Memory($fIn, $file);
$count830++;

##########################
# input file name
$file = 'A10.txt';
open $fIn, '+<', $file or die "Could not open $file: $!";

print "\nFile $file \nMemory (in KByte):\n";
print FILE "\nFile $file \nMemory (in KByte):\n";

Memory($fIn, $file);
$count830++;

##########################
# input file name
$file = 'A11.txt';
open $fIn, '+<', $file or die "Could not open $file: $!";

print "\nFile $file \nMemory (in KByte):\n";
print FILE "\nFile $file \nMemory (in KByte):\n";

Memory($fIn, $file);
$count830++;

##########################
# input file name
$file = 'A12.txt';
open $fIn, '+<', $file or die "Could not open $file: $!";

print "\nFile $file \nMemory (in KByte):\n";
print FILE "\nFile $file \nMemory (in KByte):\n";

Memory($fIn, $file);
$count830++;

##########################
# input file name
$file = 'A13.txt';
open $fIn, '+<', $file or die "Could not open $file: $!";

print "\nFile $file \nMemory (in KByte):\n";
print FILE "\nFile $file \nMemory (in KByte):\n";

Memory($fIn, $file);
$count830++;

##########################
# input file name
$file = 'A14.txt';
open $fIn, '+<', $file or die "Could not open $file: $!";

print "\nFile $file \nMemory (in KByte):\n";
print FILE "\nFile $file \nMemory (in KByte):\n";

Memory($fIn, $file);
$count830++;

##########################
# input file name
$file = 'A15.txt';
open $fIn, '+<', $file or die "Could not open $file: $!";

print "\nFile $file \nMemory (in KByte):\n";
print FILE "\nFile $file \nMemory (in KByte):\n";

Memory($fIn, $file);
$count830++;

##########################
# input file name
$file = 'A16.txt';
open $fIn, '+<', $file or die "Could not open $file: $!";

print "\nFile $file \nMemory (in KByte):\n";
print FILE "\nFile $file \nMemory (in KByte):\n";

Memory($fIn, $file);
$count830++;

####################
#  DSR 800 Start
####################
##########################
# input file name
$file = 'B01.txt';
open $fIn, '+<', $file or die "Could not open $file: $!";

print "\nFile $file \nMemory (in KByte):\n";
print FILE "\nFile $file \nMemory (in KByte):\n";

Memory($fIn, $file);
$count800++;

##########################
# input file name
$file = 'B02.txt';
open $fIn, '+<', $file or die "Could not open $file: $!";

print "\nFile $file \nMemory (in KByte):\n";
print FILE "\nFile $file \nMemory (in KByte):\n";

Memory($fIn, $file);
$count800++;

##########################
# input file name
$file = 'B03.txt';
open $fIn, '+<', $file or die "Could not open $file: $!";

print "\nFile $file \nMemory (in KByte):\n";
print FILE "\nFile $file \nMemory (in KByte):\n";

Memory($fIn, $file);
$count800++;

##########################
# input file name
$file = 'B04.txt';
open $fIn, '+<', $file or die "Could not open $file: $!";

print "\nFile $file \nMemory (in KByte):\n";
print FILE "\nFile $file \nMemory (in KByte):\n";

Memory($fIn, $file);
$count800++;

##########################
# input file name
$file = 'B05.txt';
open $fIn, '+<', $file or die "Could not open $file: $!";

print "\nFile $file \nMemory (in KByte):\n";
print FILE "\nFile $file \nMemory (in KByte):\n";

Memory($fIn, $file);
$count800++;

##########################
# input file name
$file = 'B06.txt';
open $fIn, '+<', $file or die "Could not open $file: $!";

print "\nFile $file \nMemory (in KByte):\n";
print FILE "\nFile $file \nMemory (in KByte):\n";

Memory($fIn, $file);
$count800++;

##########################
# input file name
$file = 'B07.txt';
open $fIn, '+<', $file or die "Could not open $file: $!";

print "\nFile $file \nMemory (in KByte):\n";
print FILE "\nFile $file \nMemory (in KByte):\n";

Memory($fIn, $file);
$count800++;

##########################
# input file name
$file = 'B08.txt';
open $fIn, '+<', $file or die "Could not open $file: $!";

print "\nFile $file \nMemory (in KByte):\n";
print FILE "\nFile $file \nMemory (in KByte):\n";

Memory($fIn, $file);
$count800++;

##########################
# input file name
$file = 'B09.txt';
open $fIn, '+<', $file or die "Could not open $file: $!";

print "\nFile $file \nMemory (in KByte):\n";
print FILE "\nFile $file \nMemory (in KByte):\n";

Memory($fIn, $file);
$count800++;

##########################
# input file name
$file = 'B10.txt';
open $fIn, '+<', $file or die "Could not open $file: $!";

print "\nFile $file \nMemory (in KByte):\n";
print FILE "\nFile $file \nMemory (in KByte):\n";

Memory($fIn, $file);
$count800++;

##########################
# input file name
$file = 'B11.txt';
open $fIn, '+<', $file or die "Could not open $file: $!";

print "\nFile $file \nMemory (in KByte):\n";
print FILE "\nFile $file \nMemory (in KByte):\n";

Memory($fIn, $file);
$count800++;

##########################
# input file name
$file = 'B12.txt';
open $fIn, '+<', $file or die "Could not open $file: $!";

print "\nFile $file \nMemory (in KByte):\n";
print FILE "\nFile $file \nMemory (in KByte):\n";

Memory($fIn, $file);
$count800++;

##########################
# input file name
$file = 'B13.txt';
open $fIn, '+<', $file or die "Could not open $file: $!";

print "\nFile $file \nMemory (in KByte):\n";
print FILE "\nFile $file \nMemory (in KByte):\n";

Memory($fIn, $file);
$count830++;

##########################
# input file name
$file = 'B14.txt';
open $fIn, '+<', $file or die "Could not open $file: $!";

print "\nFile $file \nMemory (in KByte):\n";
print FILE "\nFile $file \nMemory (in KByte):\n";

Memory($fIn, $file);
$count830++;

##########################
# input file name
$file = 'B15.txt';
open $fIn, '+<', $file or die "Could not open $file: $!";

print "\nFile $file \nMemory (in KByte):\n";
print FILE "\nFile $file \nMemory (in KByte):\n";

Memory($fIn, $file);
$count830++;

##########################
# input file name
$file = 'B16.txt';
open $fIn, '+<', $file or die "Could not open $file: $!";

print "\nFile $file \nMemory (in KByte):\n";
print FILE "\nFile $file \nMemory (in KByte):\n";

Memory($fIn, $file);
$count830++;

####################################################################################################
print "\nThere are $count800 DSR 800 units; and $count830 DSR 830 units \n";
print FILE "\nThere are $count800 DSR 800 units; and $count830 DSR 830 units\n";

####### Now for Shelf A #######
print "\n";
print FILE "\n";
print "==================================== SIT Rack Shelf A ====================================\n";
print FILE "==================================== SIT Rack Shelf A ====================================\n";

print "                     A01    A02    A03    A04    A05    A06    A07    A08    A09    A10    A11    A12    A13    A14    A15    A16\n";
print FILE "                     A01   A02   A03   A04   A05    A06    A07    A08   A09   A10   A11   A12   A13    A14    A15    A16\n";
print "FreeMem830(KByte): ";
print FILE "FreeMem830(KByte): ";

for(my $i=1; $i <= 16; $i++)
{
    print "$freeMemArA[$i]","  ";
    print FILE "$freeMemArA[$i]","  ";    
}
print "\n";
print FILE "\n";
print FILE "\n";
print "                    A01    A02    A03    A04    A05    A06    A07    A08    A09    A10    A11    A12    A13    A14    A15    A16\n";
print FILE "                    A01    A02    A03    A04    A05    A06    A07    A08    A09    A10    A11    A12    A13    A14    A15    A16\n";
print "UsedMem830(KByte): ";
print FILE "UsedMem830(KByte): ";

for(my $i=1; $i <= 16; $i++)
{
    print "$usedMemArA[$i]"," ";
    print FILE "$usedMemArA[$i]"," ";    
}
print "\n";

####### Now for Shelf B #######

print "\n";
print "\n";
print FILE "\n";
print FILE "\n";
print "==================================== SIT Rack Shelf B ====================================\n";
print FILE "==================================== SIT Rack Shelf B ====================================\n";
print "                     B01    B02    B03    B04    B05    B06    B07    B08    B09    B10    B11    B12 \n";
print FILE "                     B01     B02     B03     B04     B05     B06     B07     B08     B09     B10     B11    B12 \n";
print "FreeMem800(KByte): ";
print FILE "FreeMem800(KByte): ";

for(my $i=1; $i <= 12; $i++)
{
    print "$freeMemArB[$i]","  ";
    print FILE "$freeMemArB[$i]","  ";    
}
print "\n";
print FILE "\n";
print FILE "\n";
print "                    B01    B02    B03    B04    B05    B06    B07    B08    B09    B10    B11    B12\n";
print FILE "                    B01    B02    B03    B04    B05    B06    B07    B08    B09    B10    B11    B12\n";
print "UsedMem800(KByte): ";
print FILE "UsedMem800(KByte): ";

for(my $i=1; $i <= 12; $i++)
{
    print "$usedMemArB[$i]"," ";
    print FILE "$usedMemArB[$i]"," ";    
}
print "\n";
print "\n";
print FILE "\n";
print FILE "\n";

print "                    B13    B14    B15    B16\n";
print FILE "                    B13    B14    B15    B16\n";
print "FreeMem830(KByte): ";
print FILE "FreeMem830(KByte): ";

for(my $i=13; $i <= 16; $i++)
{
    print "$freeMemArB[$i]","  ";
    print FILE "$freeMemArB[$i]","  ";    
}
print "\n";
print FILE "\n";
print FILE "\n";
print "                    B13    B14    B15    B16\n";
print FILE "                    B13    B14    B15    B16\n";
print "UsedMem830(KByte): ";
print FILE "UsedMem830(KByte): ";

for(my $i=13; $i <= 16; $i++)
{
    print "$usedMemArB[$i]"," ";
    print FILE "$usedMemArB[$i]"," ";    
}
print "\n";
print FILE "\n";


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
             
             # print "usedMemArA[$unit]= @usedMemArA[$unit]\n";   # Dereferencing it lets you access the array
             # print "freeMemArA[$unit]= @freeMemArA[$unit]\n"; 
          
         }  #if($Mem =~ m/Mem:(.*)/)  $memCount
      }  #if($line =~ /Mem/)             
    } #while (my $line = <$fh>)

    # Calculate average
    Average($usedMemTot, $freeMemTot, $memCount);
    
    # Calculate average
    $usedMemAvg = $usedMemTot / $memCount;
    $freeMemAvg = $freeMemTot / $memCount;
    
    #print "File: $file\n";
    if($file =~ /^A/)
    {
           
       $usedMemArA[$unit] = int($usedMemAvg);
       $freeMemArA[$unit] = int($freeMemAvg);
       
       print "usedMemArA[$unit]= @usedMemArA[$unit]\n";   # Dereferencing it lets you access the array
       print "freeMemArA[$unit]= @freeMemArA[$unit]\n";
       
       print FILE "usedMemArA[$unit]= @usedMemArA[$unit]\n";   # Dereferencing it lets you access the array
       print FILE "freeMemArA[$unit]= @freeMemArA[$unit]\n";
       $unit++;
    }
    
    if($file =~ /^B/)
    {
       if($unit>16)
       {
           $unit=1;
       }       
    
       $usedMemArB[$unit] = int($usedMemAvg);
       $freeMemArB[$unit] = int($freeMemAvg);
       print "usedMemArB[$unit]= @usedMemArB[$unit]\n";   # Dereferencing it lets you access the array
       print "freeMemArB[$unit]= @freeMemArB[$unit]\n";
       
       print FILE "usedMemArB[$unit]= @usedMemArB[$unit]\n";   # Dereferencing it lets you access the array
       print FILE "freeMemArB[$unit]= @freeMemArB[$unit]\n";
       $unit++;
    }                        
    
    # print "usedMemArA[$unit]= @usedMemArA[$unit]\n";   # Dereferencing it lets you access the array
    # print "freeMemArA[$unit]= @freeMemArA[$unit]\n"; 
             
    #print "\nusedMemTot = $usedMemTot; usedMemCount = $usedMemCount; usedMemAvg = $usedMemAvg\n";
    #print "freeMemTot = $freeMemTot; freeMemCount = $freeMemCount; freeMemAvg = $freeMemAvg\n";

    #print FILE "\nusedMemTot = $usedMemTot; usedMemCount = $usedMemCount; usedMemAvg = $usedMemAvg\n";
    #print FILE "freeMemTot = $freeMemTot; freeMemCount = $freeMemCount; freeMemAvg = $freeMemAvg\n";    
}
##################################################################################################

##################################################################################################
sub Average{  
    my $usedMemTot = shift;
    my $freeMemTot = shift;
    my $memCount = shift;
    my $fileOut = shift;
    
    # Calculate average
    my $usedMemAvg = $usedMemTot / $memCount;
    my $freeMemAvg = $freeMemTot / $memCount;
    print "\nInside Average function\n";
    print "\nmemCount = $memCount; usedMemTot = $usedMemTot; usedMemAvg = $usedMemAvg\n";
    print "memCount = $memCount; freeMemTot = $freeMemTot; freeMemAvg = $freeMemAvg\n";
        
    print FILE "\nmemCount = $memCount; usedMemTot = $usedMemTot; usedMemAvg = $usedMemAvg\n";
    print FILE "memCount = $memCount; freeMemTot = $freeMemTot; freeMemAvg = $freeMemAvg\n";
}
##################################################################################################