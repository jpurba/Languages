"""
File: detection.py
Project 7.10

Defines and tests a function to sharpen an image.
"""

from images import Image

def sharpen(image, degree, threshold):
    """Builds and returns a sharpened image.  Expects an image
    and two integers (the degree to which the image should be sharpened and the
    threshold used to detect edges) as arguments."""
    
    new = image.clone()
    for y in range(0,image.height - 1):
        for x in range(0, image.width - 1):
            calculate = (1-degree/100)
            currentPixel = image.getPixel(x,y)
            (r,g,b) = currentPixel
            currentPixelAvg =  (r+g+b)/3
            if x==0:
                x=1
            leftPixel = image.getPixel(x-1,y)
            (r1,g1,b1) = leftPixel
            leftPixelAvg = (r1+g1+b1)/3
            bottomPixel = image.getPixel(x,y+1)
            (r2,g2,b2) = bottomPixel
            bottomPixelAvg = (r2+g2+b2)/3
            if abs(currentPixelAvg - leftPixelAvg) > threshold or \
               abs(currentPixelAvg - bottomPixelAvg) > threshold:                
                new.setPixel(x,y,(r*calculate, g*calculate, b*calculate))
            
    return new


def main():
    filename = ("smokey.gif") #input("Enter the image file name: ")
    image = Image(filename)
    print("Close the image window to continue. ")
    image.draw()
    newimage = sharpen(image, 20, 15)
    print("Close the image window to quit. ")
    newimage.draw()

if __name__ == "__main__":
   main()
