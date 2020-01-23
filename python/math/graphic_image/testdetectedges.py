"""
File: testdetectedges.py
Tests a function for detecting edges in an image.
Modified from text book code by adding sharpen and compareImage functions
Student name: Jeremiah Purba
Homework: 7.10
Date: 1/21/2020
Class: CISC 179 Python Programming
"""

from images import Image

def sharpenDetect(image, degree, threshold):
    def average(triple):
        (r, g, b) = triple
        return (r + g + b) / 3

    blackPixel = (0, 0, 0)
    whitePixel = (255, 255, 255)
    new = image.clone()
    calculate = (1-(degree/100))
    for y in range(1,image.getHeight() - 1):
        for x in range(1, image.getWidth()-1):
            oldPixel = image.getPixel(x, y)
            (r,g,b) = oldPixel            
            leftPixel = image.getPixel(x - 1, y)
            rightPixel = image.getPixel(x+1,y)
            bottomPixel = image.getPixel(x, y + 1)
            upPixel = image.getPixel(x, y-1)
            oldLum = average(oldPixel)
            leftLum = average(leftPixel)
            rightLum = average(rightPixel)
            bottomLum = average(bottomPixel)
            upLum = average(upPixel)
            #if abs(oldLum - leftLum) > threshold or \
            #if abs(oldLum - bottomLum) > threshold or \
            if abs(leftLum - rightLum) > threshold:
                new.setPixel(x, y, (r*calculate, g*calculate, b*calculate))

def sharpen(image, degree, threshold):
    """Builds and returns a new image in which the 
    edges of the argument image are highlighted and
    the colors are reduced to black and white."""

    def average(triple):
        (r, g, b) = triple
        return (r + g + b) // 3

    blackPixel = (0, 0, 0)
    whitePixel = (255, 255, 255)
    new = image.clone()
    calculate = (1-(degree/100))
    for y in range(1,image.getHeight() - 1):
        for x in range(1, image.getWidth()):
            oldPixel = image.getPixel(x, y)
            (r,g,b) = oldPixel
            leftPixel = image.getPixel(x - 1, y)
            bottomPixel = image.getPixel(x, y + 1)
            upPixel = image.getPixel(x, y-1)
            oldLum = average(oldPixel)
            leftLum = average(leftPixel)
            bottomLum = average(bottomPixel)
            upLum = average(upPixel)
            if abs(oldLum - leftLum) > threshold or \
               abs(oldLum - bottomLum) > threshold:
                new.setPixel(x, y,(max(oldPixel[0] - degree, 0),max(oldPixel[1] - degree, 0),max(oldPixel[2] - degree, 0)))
                
                
    #(rNew,gNew,bNew) = new.getPixel(x,y)
    #(r,g,b) = image.getPixel(x,y)
    #print("modified image: ",rNew, gNew, bNew)
    #print("Original image: ",r,g,b)
    #print("x: ",x,"y: ",y)
                
    return new

def detectEdges(image, amount):
    """Builds and returns a new image in which the 
    edges of the argument image are highlighted and
    the colors are reduced to black and white."""

    def average(triple):
        (r, g, b) = triple
        return (r + g + b) // 3

    blackPixel = (0, 0, 0)
    whitePixel = (255, 255, 255)
    new = image.clone()
    for y in range(1,image.getHeight() - 1):
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
            totalDiff = totalDiff + (abs(r1-r2)/255)  # for red
            totalDiff = totalDiff + (abs(g1-g2)/255)  # for green
            totalDiff = totalDiff + (abs(b1-b2)/255)  # for blue
            
    diffPercent = totalDiff / ((image1.getHeight()-1)*(image1.getWidth()-1)*3)
    diffPercent = diffPercent * 100
    print ("Height = ", image1.getHeight(), "Width = ", image1.getWidth()) 
    print ("TotalDiff = ", totalDiff, " diffPercent = ", diffPercent, " %")

def inverseImage(image):
    new = image.clone()
    for y in range(image.getHeight()):
        for x in range(1, image.getWidth()):
            (r,g,b) = image.getPixel(x, y)
            new.setPixel(x, y, ((255-r),(255-g),(255-b)))
    return new

    

def main(filename = "smokey.gif"):
    THRESHOLD1 = 10
    THRESHOLD2 = 20
    THRESHOLD3 = 30
    DEGREE1 = 10
    DEGREE2 = 20
    DEGREE3 = 30
    
    image = Image(filename)
    filename2 = "smokey_1.gif"
    imageTools = Image(filename2)

    filename3 = "smokey_2.gif"
    imOriginalAns = Image(filename3)
    """
    print("Close the image window to continue. ")
    image.draw()
    image2 = detectEdges(image, THRESHOLD1)
    print("Close the image window to continue. ")
    image2.draw()
    print("COmpare original image with detectEdges threshold = ", THRESHOLD1)
    compareImage(image, image2)

    image3 = detectEdges(image, THRESHOLD2)
    print("Close the image window to continue. ")
    image3.draw()
    print("COmpare original image with detectEdges threshold = ", THRESHOLD2)
    compareImage(image, image3)
    
    print("Close the image window to quit. ")
    image4 = detectEdges(image, THRESHOLD3)
    print("Close the image window to continue. ")
    image4.draw()
    print("COmpare original image with detectEdges threshold = ", THRESHOLD3)
    compareImage(image, image4)
    print("Close the image window to quit. ")
    """

    print("Close the image window to continue. ")
    image.draw()
    print("Inverse the original image")
    print("Close the image window to continue. ")
    imageInverse = inverseImage(image)
    imageInverse.draw()
    
    image2 = sharpen(image, DEGREE2, THRESHOLD1)
    print("Close the image window to continue. ")
    image2.draw()
    print("COmpare original image with detectEdges threshold = ", THRESHOLD1)
    compareImage(image, image2)

    image3 = sharpen(image, DEGREE2, THRESHOLD2)
    print("Close the image window to continue. ")
    image3.draw()
    print("COmpare original image with detectEdges threshold = ", THRESHOLD2)
    compareImage(image, image3)
    
    print("Close the image window to quit. ")
    image4 = sharpen(image, DEGREE2, THRESHOLD3)
    print("Close the image window to continue. ")
    image4.draw()
    print("COmpare original image with detectEdges threshold = ", THRESHOLD3)
    compareImage(image, image4)
    print("Close the image window to quit. ")

    print("Compare original image with original image")
    compareImage(image, image)
    
    print("Compare original image with tools image")
    compareImage(image, imageTools)

    print("Compare image tools with answer original image")
    compareImage(imageTools, imOriginalAns)

    print("Compare original image with inverse image")
    compareImage(image, imageInverse)

if __name__ == "__main__":
   main()

