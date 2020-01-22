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
    def average(triple):
        (r, g, b) = triple
        return (r + g + b) / 3
    
    blackPixel = (0,0,0)
    whitePixel = (255,255,255)
    calculate = (1-degree/100)
    new = image.clone()
    for y in range(image.getHeight() - 1):
        for x in range(1, image.getWidth()-1):
            oldPixel = image.getPixel(x,y)
            (r,g,b) = oldPixel
            #oldPixelAvg =  (r+g+b)/3
            oldPixelAvg = average(oldPixel)
            leftPixel = image.getPixel(x-1,y)
            #(r1,g1,b1) = leftPixel
            #leftPixelAvg = (r1+g1+b1)/3
            leftPixelAvg = average(leftPixel)
            bottomPixel = image.getPixel(x,y+1)
            #(r2,g2,b2) = bottomPixel
            #bottomPixelAvg = (r2+g2+b2)/3
            bottomPixelAvg = average(bottomPixel)
            rightPixel = image.getPixel(x+1,y)
            #(r3,g3,b3) = rightPixel
            #rightPixelAvg = (r3+g3+b3)/3
            rightPixelAvg = average(rightPixel)
            if abs(oldPixelAvg - leftPixelAvg) > threshold or \
               abs(oldPixelAvg - rightPixelAvg) > threshold:
                new.setPixel(x,y,(r*calculate, g*calculate, b*calculate))
    return image

def main():
    #filename = input("Enter the image file name: ")
    filename = "smokey.gif"
    image = Image(filename)
    newimage = sharpen(image, 20, 15)
    newimage.draw()

if __name__ == "__main__":
   main()


