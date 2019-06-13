using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Net;
using System.Net.Sockets;

namespace TCP_Client
{
    class Program
    {
        static byte[] Buffer { get; set; }
        static Socket sck;

        static void Main(string[] args)
        {
            sck = new Socket(AddressFamily.InterNetwork, SocketType.Stream, ProtocolType.Tcp);
            IPEndPoint localEndPoint = new IPEndPoint(IPAddress.Parse("127.0.0.1"), 1234);

            try
            {
                sck.Connect(localEndPoint);
            }
            catch
            {
                Console.Write("Unable to connect to remote end point !");
                Main(args);
            }
            Console.Write("Enter text: ");
            string text = Console.ReadLine();
            byte[] data = Encoding.ASCII.GetBytes(text);

            sck.Send(data);
            Console.Write("Data Sent !\r\n");
            Console.Write("Press any key to continue ...");
            Console.Read();
            sck.Close();
        }
    }
}
