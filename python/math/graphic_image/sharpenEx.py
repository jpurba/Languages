from images import Image

def sharpen(image, degree, threshold):
    new = image.clone
    for y in range (0, image.height-1):
        for x in range (0, image.width-1):
            (r, g, b) = image.getPixel(x, y)
            average = (r + g + b) / 3
            if(average > threshold):
                average = average * (1-degree/100)
                image.setPixel(x, y, (r*(1-degree/100),g*(1-degree/100),b*(1-degree/100)))

                
for y in range (0, image.height-1):
for x in range (0, image.width-1):
(r, g, b) = image.getPixel(x, y)
average = (r + g + b) / 3
if(average > threshold):
average = average * (1-degree/100)
image.setPixel(x, y, (r*(1-degree/100),g*(1-degree/100),b*(1-degree/100)))
def main():
filename = input("Enter the image file name: ")
image = Image(filename)
newimage = sharpen(image, 20, 15)
newimage.draw()

if __name__ == '__main__':
main()
