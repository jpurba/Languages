"""
File: testdetectedges.py
Tests a function for detecting edges in an image.
"""

from images import Image

def detectEdges(image, amount):
    """Builds and returns a new image in which the 
    edges of the argument image are highlighted and
    the colors are reduced to black and white."""

    def average(triple):
        (r, g, b) = triple
        return (r + g + b) / 3

    blackPixel = (0, 0, 0)
    whitePixel = (255, 255, 255)
    new = image.clone()
    for y in range(image.getHeight() - 1):
        for x in range(1, image.getWidth()):
            oldPixel = image.getPixel(x, y)
            leftPixel = image.getPixel(x - 1, y)
            bottomPixel = image.getPixel(x, y + 1)
            oldLum = average(oldPixel)
            leftLum = average(leftPixel)
            bottomLum = average(bottomPixel)
            if abs(oldLum - leftLum) > amount or \
               abs(oldLum - bottomLum) > amount:
                new.setPixel(x, y, blackPixel)
            else:
                new.setPixel(x, y, whitePixel)
    return new


def compareImage(image1,image2):
    totalDiff = 0.0
    diffPercent = 0.0
    for y in range(image1.getHeight()):
        for x in range(1, image1.getWidth()):
            (r1,g1,b1) = image1.getPixel(x,y)
            (r2,g2,b2) = image2.getPixel(x,y)
            totalDiff = totalDiff + abs(r1-r2) + abs (g1-g2) + abs(b1-b2)
    diffPercent = totalDiff / ((image1.getHeight()-1)*(image1.getWidth()-1))
    
    print ("Height = ", image1.getHeight(), "Width = ", image1.getWidth()) 
    print ("TotalDiff = ", totalDiff, " diffPercent = ", diffPercent)

    

def main(filename = "smokey.gif"):
    image = Image(filename)
    print("Close the image window to continue. ")
    image.draw()
    image2 = detectEdges(image, 10)
    print("Close the image window to continue. ")
    image2.draw()
    compareImage(image, image)

    #image3 = detectEdges(image, 20)
    #print("Close the image window to continue. ")
    #image3.draw()
    #print("Close the image window to quit. ")
    #image4 = detectEdges(image, 30)
    #print("Close the image window to continue. ")
    #image4.draw()
    #print("Close the image window to quit. ")
    

if __name__ == "__main__":
   main()

