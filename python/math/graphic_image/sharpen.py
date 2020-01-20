"""
File: sharpen.py
Project 7.10

Defines and tests a function to sharpen an image.
"""

from images import Image

def sharpen(image, degree, threshold):
    """Builds and returns a sharpened image.  Expects an image
    and two integers (the degree to which the image should be sharpened and the
    threshold used to detect edges) as arguments."""
    blackPixel = (0,0,0)
    whitePixel = (255,255,255)
    new = image.clone()
    for y in range(image.getHeight() - 1):
        for x in range(1, image.getWidth()):
            oldPixel = image.getPixel(x,y)
            (r,g,b) = oldPixel
            oldPixelAvg =  (r+g+b)/3
            leftPixel = image.getPixel(x-1,y)
            (r1,g1,b1) = leftPixel
            leftPixelAvg = (r1+g1+b1)/3
            bottomPixel = image.getPixel(x,y+1)
            (r2,g2,b2) = bottomPixel
            bottomPixelAvg = (r2+g2+b2)/3
            if abs(oldPixelAvg - leftPixelAvg) > threshold or \
               abs(oldPixelAvg - bottomPixelAvg) > threshold:
                new.setPixel(x,y,blackPixel)
            else:
                new.setPixel(x,y, whitePixel)
    return new

def main():
    filename = ("smokey.gif") #input("Enter the image file name: ")
    image = Image(filename)
    newimage = sharpen(image, 20, 15)
    newimage.draw()

if __name__ == "__main__":
   main()
