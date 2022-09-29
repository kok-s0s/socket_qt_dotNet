// 原代码链接 https://www.c-sharpcorner.com/article/socket-programming-in-C-Sharp/

using System;
using System.Net;
using System.Net.Sockets;
using System.Text;

// Client app is the one sending messages to a Server/listener.
// Both listener and client can send messages back and forth once a
// communication is established.
public class SocketClient
{
    public static int Main(String[] args)
    {
        StartClient();
        return 0;
    }

    public static void StartClient()
    {
        byte[] bytes = new byte[1024];

        try
        {
            // Connect to a Remote server
            // Get Host IP Address that is used to establish a connection
            // In this case, we get one IP address of localhost that is IP : 127.0.0.1
            // If a host has multiple addresses, you will get a list of addresses

            // IPHostEntry host = Dns.GetHostEntry("localhost");
            // IPAddress ipAddress = host.AddressList[0];

            IPAddress ipAddress = IPAddress.Parse("192.168.0.170");
            IPEndPoint remoteEP = new IPEndPoint(ipAddress, 11001);

            // Create a TCP/IP  socket.
            Socket sender = new Socket(ipAddress.AddressFamily, SocketType.Stream, ProtocolType.Tcp);

            // Connect to Remote EndPoint
            sender.Connect(remoteEP);

            Console.WriteLine("Socket connected to {0}", sender.RemoteEndPoint.ToString());

            // Send the "connect" string and accept "1" as a test for successfully establishing a connection
            byte[] connect = Encoding.ASCII.GetBytes("connect");

            Console.WriteLine("The operand sent by the client is ‘connect’");

            // Send the data through the socket.
            int bytesSentCheck = sender.Send(connect);

            // Receive the response from the remote device.
            int bytesRecCheck = sender.Receive(bytes);
            Console.WriteLine("The string returned by the server is {0}", Encoding.ASCII.GetString(bytes, 0, bytesRecCheck));
            Console.ReadLine();

            for (int i = 0; i < 288; ++i)
            {
                Console.WriteLine("Socket connected to {0}", sender.RemoteEndPoint.ToString());

                // Encode the data string into a byte array.
                byte[] msg = Encoding.ASCII.GetBytes(i.ToString());
                Console.WriteLine("The operand sent by the client is {0}", i.ToString());

                // Send the data through the socket.
                int bytesSent = sender.Send(msg);

                // Receive the response from the remote device.
                int bytesRec = sender.Receive(bytes);


                Console.WriteLine("The string returned by the server is {0}", Encoding.ASCII.GetString(bytes, 0, bytesRec));
                Console.WriteLine();

                if (Encoding.ASCII.GetString(bytes, 0, bytesRec) == "pause")
                {
                    Console.WriteLine("Test Stop!");
                    Console.ReadLine();
                }

                /*
                 * TODO：C# 客户端做某些工作
                 */
            }

            Console.ReadLine();

            // Release the socket.
            sender.Shutdown(SocketShutdown.Both);
            sender.Close();
        }
        catch (Exception e)
        {
            Console.WriteLine(e.ToString());
        }
    }
}