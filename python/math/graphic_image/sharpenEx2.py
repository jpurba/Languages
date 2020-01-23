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
        return (r + g + b) // 3

    blackPixel = (0, 0, 0)
    whitePixel = (255, 255, 255)
    new = image.clone()
    calculate = (1-(degree/100))
    for y in range(image.getHeight() - 1):
        for x in range(1, image.getWidth()):
            oldPixel = image.getPixel(x, y)
            (r,g,b) = oldPixel
            leftPixel = image.getPixel(x - 1, y)
            bottomPixel = image.getPixel(x, y + 1)
            oldLum = average(oldPixel)
            leftLum = average(leftPixel)
            bottomLum = average(bottomPixel)
            if abs(oldLum - leftLum) > threshold or \
               abs(oldLum - bottomLum) > threshold:
                new.setPixel(x, y, (r*calculate, g*calculate, b*calculate))
                
    #(rNew,gNew,bNew) = new.getPixel(x,y)
    #(r,g,b) = image.getPixel(x,y)
    #print("modified image: ",rNew, gNew, bNew)
    #print("Original image: ",r,g,b)
    #print("x: ",x,"y: ",y)
    return new

def main():
    filename = input("Enter the image file name: ")
    image = Image(filename)
    newimage = sharpen(image, 20, 15)
    newimage.draw()

if __name__ == "__main__":
   main()


