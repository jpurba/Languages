using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.IO;

namespace Parsing_Preamble
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        static OpenFileDialog ofd = new OpenFileDialog();
        

        private void button2_Click(object sender, EventArgs e)
        {
            ofd.Filter = "dlc | *.dlc";                        
            string descTag = null;
            string descLen = null;
            string sac_queue_ID = null;
            string start1 = null;
            string stop1 = null;
            string msgType = null;
            string msgTypeInfo = null;
            string addrType = null;
            string Length = null;
            string mc16 = null;
            string UAb = null;
            string UAI = null;
            string frames = null;
            string segment = null;
            string preamble = null;
            string crc = null;
            string res = null;
            string mtv = null;
            string dl_msg_subtype = null;
            string manufacture_id = null;
            string manufacture = null;
            string app_id = null;
            string app_ver_lvl = null;
            string force_dl_now = null;
            string code_app_mode = null;
            string resv = null;
            string list_length = null;
            string dl_resv = null;
            string ID_type = null;
            string model_id = null;
            string min_app_ver_lvl = null;
            string stream_select = null;
            string download_id = null;
            string threshold = null;
            string whitener = null;
            string dsrType = null;
            string projectType = null;
            string streamSelect = null;


            if (ofd.ShowDialog() == DialogResult.OK)
            {
                textBox1.Text = ofd.FileName;
                textBox2.Text = ofd.SafeFileName;
            }

            BinaryReader br = new BinaryReader(File.OpenRead(ofd.FileName));
                       
            // Scan all of the byte from the beginning 
            // The first byte is descriptor tag
            int i = 0x0000;
            br.BaseStream.Position = i;
            descTag = br.ReadByte().ToString("X2");
            textBox3.Text = descTag;

            textBox4.Text = descriptionTag(descTag);            

            // The Second byte (2 bytes long) is descriptor Length
            for (i = 0x0001; i <= 0x0002; i++)
            {
                br.BaseStream.Position = i;
                descLen += br.ReadByte().ToString("X2");
            }
            textBox5.Text = descLen;
            //MessageBox.Show(descLen);  //debug
            int decNum = Convert.ToInt32(descLen, 16);
                       
            textBox6.Text = (decNum.ToString()) + " (decimal)";

            switch (descLen)
            {
                case "0001":
                    i = 0x0003;                   
                    br.BaseStream.Position = i;
                    sac_queue_ID = br.ReadByte().ToString("X2");
                    textBox7.Text = sac_queue_ID;
                    break;
                case "0008":
                    break;
                case "0024":
                    break;
            }

            descTag = null;
            descLen = null;
            

            // Second SAC Message
            // The first byte is descriptor tag
            i = 0x0004;
            br.BaseStream.Position = i; 
            descTag = br.ReadByte().ToString("X2");
            textBox9.Text = descTag;
            textBox13.Text = descriptionTag(descTag);            

            // The Second byte (2 bytes long) is descriptor Length
            for (i = 0x0005; i <= 0x0006; i++)
            {
                br.BaseStream.Position = i;
                descLen += br.ReadByte().ToString("X2");
            }
            textBox10.Text = descLen;
            //MessageBox.Show(descLen);  //debug
            decNum = Convert.ToInt32(descLen, 16);

            textBox8.Text = (decNum.ToString()) + " (decimal)";

            // The Third Part (4 bytes long ) is Start
            for (i = 0x0007; i <= 0x000A; i++)
            {
                br.BaseStream.Position = i;
                start1 += br.ReadByte().ToString("X2");
            }
            textBox11.Text = start1;
            //MessageBox.Show(descLen);  //debug
            decNum = Convert.ToInt32(start1, 16);

            textBox14.Text = (decNum.ToString()) + " (decimal)";

            // The Fourth Part (4 bytes long ) is Stop
            for (i = 0x000B; i <= 0x000E; i++)
            {
                br.BaseStream.Position = i;
                stop1 += br.ReadByte().ToString("X2");
            }
            textBox12.Text = stop1;
            //MessageBox.Show(descLen);  //debug
            decNum = Convert.ToInt32(stop1, 16);

            textBox15.Text = (decNum.ToString()) + " (decimal)";

            descTag = null;
            descLen = null;

            // Third SAC Message
            // The first byte is descriptor tag
            i=0x000F;
            br.BaseStream.Position = i;
            descTag = br.ReadByte().ToString("X2");
            textBox16.Text = descTag;
            textBox22.Text = descriptionTag(descTag);
            

            //i = 0x0005;

            // The Second byte (2 bytes long) is descriptor Length
            for (i = 0x0010; i <= 0x0011; i++)
            {
                br.BaseStream.Position = i;
                descLen += br.ReadByte().ToString("X2");
            }
            textBox24.Text = descLen;
            //MessageBox.Show(descLen);  //debug
            decNum = Convert.ToInt32(descLen, 16);

            textBox23.Text = (decNum.ToString()) + " (decimal)";

            // The third part is message type
            i = 0x0012;
            br.BaseStream.Position = i;
            msgType = br.ReadByte().ToString("X2");
            if(msgType == "94")
            {
                msgTypeInfo = "Download Preamble";
            }
            else
            {
                msgTypeInfo = "Unknown ?? No Info";
            }
            textBox17.Text = msgType;
            textBox25.Text = msgTypeInfo;

            // The Fourth part is address type
            i = 0x0013;
            br.BaseStream.Position = i;
            addrType = br.ReadByte().ToString("X2");
            decNum = Convert.ToInt32(addrType, 16);
            int intTemp = decNum >> 4;
            //MessageBox.Show(intTemp.ToString());  //debug

            textBox18.Text = intTemp.ToString();
            //textBox26.Text = " ";

            if (intTemp == 1) // Address Type 1
            {
                textBox26.Text = "SingleCast";

                // The fifth part is Length
                for (i = 0x0013; i <= 0x0014; i++)
                {
                    br.BaseStream.Position = i;
                    Length += br.ReadByte().ToString("X2");
                }

                decNum = Convert.ToInt32(Length, 16);
                intTemp = decNum & 0x0FFF;
                textBox19.Text = intTemp.ToString("X2");
                textBox72.Text = (intTemp.ToString()) + " (decimal)";

                // The Sixth part is UAb
                i = 0x0015;
                br.BaseStream.Position = i;
                UAb = br.ReadByte().ToString("X2");
                decNum = Convert.ToInt32(UAb, 16);
                //MessageBox.Show(intTemp.ToString());  //debug

                textBox73.Text = decNum.ToString();
                textBox74.Text = " ";

                textBox20.Text = "N/A";
                textBox42.Text = " ";

                // The Seventh part is Length
                for (i = 0x0016; i <= 0x0019; i++)
                {
                    br.BaseStream.Position = i;
                    UAI += br.ReadByte().ToString("X2");
                }

                decNum = Convert.ToInt32(UAI, 16);
                textBox76.Text = UAI;
                textBox75.Text = (decNum.ToString()) + " (decimal)" + " ";

                // The eigth part is Frames
                i = 0x001A;
                br.BaseStream.Position = i;
                frames = br.ReadByte().ToString("X2");
                decNum = Convert.ToInt32(frames, 16);
                intTemp = decNum & 0x80;
                textBox21.Text = intTemp.ToString("X");
                textBox28.Text = (intTemp.ToString()) + " (decimal)" + " ";

                // The ninth part is segment
                i = 0x001A;
                br.BaseStream.Position = i;
                segment = br.ReadByte().ToString("X2");
                decNum = Convert.ToInt32(segment, 16);
                intTemp = decNum & 0x40;
                textBox27.Text = intTemp.ToString("X");
                textBox29.Text = (intTemp.ToString()) + " (decimal)" + " ";

                // The tenth part is preamble
                i = 0x001A;
                br.BaseStream.Position = i;
                preamble = br.ReadByte().ToString("X2");
                decNum = Convert.ToInt32(preamble, 16);
                intTemp = decNum & 0x20;
                textBox30.Text = intTemp.ToString("X");
                textBox34.Text = (intTemp.ToString()) + " (decimal)" + " ";

                // The eleventh part is crc
                i = 0x001A;
                br.BaseStream.Position = i;
                crc = br.ReadByte().ToString("X2");
                decNum = Convert.ToInt32(crc, 16);
                intTemp = decNum & 0x10;
                textBox31.Text = intTemp.ToString("X");
                textBox35.Text = (intTemp.ToString()) + " (decimal)" + " ";

                // The 12th part is res
                i = 0x001A;
                br.BaseStream.Position = i;
                res = br.ReadByte().ToString("X2");
                decNum = Convert.ToInt32(res, 16);
                intTemp = decNum & 0x08;
                textBox32.Text = intTemp.ToString("X");
                textBox36.Text = (intTemp.ToString()) + " (decimal)" + " ";

                // The 13th part is mtv
                i = 0x001A;
                br.BaseStream.Position = i;
                mtv = br.ReadByte().ToString("X2");
                decNum = Convert.ToInt32(mtv, 16);
                intTemp = decNum & 0x07;
                textBox33.Text = intTemp.ToString("X");
                textBox37.Text = (intTemp.ToString()) + " (decimal)" + " ";

                // The 14th part is dl message subtypes
                i = 0x001B;
                br.BaseStream.Position = i;
                dl_msg_subtype = br.ReadByte().ToString("X2");
                decNum = Convert.ToInt32(dl_msg_subtype, 16);
                textBox38.Text = decNum.ToString("X");
                textBox39.Text = (decNum.ToString()) + " (decimal)" + " ";

                // The 15th part is manufacture ID            
                for (i = 0x001C; i <= 0x001D; i++)
                {
                    br.BaseStream.Position = i;
                    manufacture_id += br.ReadByte().ToString("X2");
                }

                manufacture = manufactureID(manufacture_id);

                decNum = Convert.ToInt32(manufacture_id, 16);

                textBox41.Text = decNum.ToString("X2");
                textBox41.BackColor = Color.LightGreen;
                textBox40.Text = manufacture;
                textBox40.BackColor = Color.LightGreen;

                // The 16th part is application ID            
                for (i = 0x001E; i <= 0x001F; i++)
                {
                    br.BaseStream.Position = i;
                    app_id += br.ReadByte().ToString("X2");
                }

                decNum = Convert.ToInt32(app_id, 16);
                textBox43.Text = app_id; //decNum.ToString("X2");
                textBox43.BackColor = Color.Yellow;
                textBox44.Text = (decNum.ToString()) + " (dec)" + " ";
                textBox44.BackColor = Color.Yellow;

                // The 17th part is app version level            
                for (i = 0x0020; i <= 0x0023; i++)
                {
                    br.BaseStream.Position = i;
                    app_ver_lvl += br.ReadByte().ToString("X2");
                }

                decNum = Convert.ToInt32(app_ver_lvl, 16);
                textBox45.Text = decNum.ToString("X2"); //app_ver_lvl; 
                textBox45.BackColor = Color.Yellow;
                textBox78.Text = decNum.ToString("X");
                textBox46.Text = (decNum.ToString("X2")) + " : Arris SW released #";
                textBox46.BackColor = Color.Yellow;

                // The 18th part is Force Download
                i = 0x0024;
                br.BaseStream.Position = i;
                force_dl_now = br.ReadByte().ToString("X2");
                decNum = Convert.ToInt32(force_dl_now, 16);
                intTemp = decNum & 0x80;
                //MessageBox.Show((intTemp.ToString("X2")));  //debug
                textBox47.Text = intTemp.ToString("X");
                if (intTemp == 128)
                {
                    textBox49.Text = "Force Down Load NOWW!!!";
                }
                else //if (intTemp == 0)
                {
                    textBox49.Text = " NOT force Download now ";
                }

                // The 19th part is code app mode
                i = 0x0024;
                br.BaseStream.Position = i;
                code_app_mode = br.ReadByte().ToString("X2");
                decNum = Convert.ToInt32(force_dl_now, 16);
                intTemp = decNum & 0x60;
                textBox48.Text = intTemp.ToString("X");
                textBox50.Text = (intTemp.ToString()) + " (decimal)" + " ";

                // The 20th part is resv
                i = 0x0024;
                br.BaseStream.Position = i;
                resv = br.ReadByte().ToString("X2");
                decNum = Convert.ToInt32(resv, 16);
                intTemp = decNum & 0x1F;
                textBox51.Text = intTemp.ToString("X");
                textBox52.Text = (intTemp.ToString()) + " (decimal)" + " ";

                // The 21th part is list length
                i = 0x0025;
                br.BaseStream.Position = i;
                list_length = br.ReadByte().ToString("X2");
                decNum = Convert.ToInt32(list_length, 16);
                textBox54.Text = decNum.ToString("X");
                textBox53.Text = (decNum.ToString()) + " (decimal)" + " ";

                // The 22th part is dl_resv
                i = 0x0026;
                br.BaseStream.Position = i;
                dl_resv = br.ReadByte().ToString("X2");
                //MessageBox.Show(dl_resv);  //debug
                decNum = Convert.ToInt32(dl_resv, 16);
                //MessageBox.Show(decNum.ToString());  //debug
                intTemp = decNum & 0xF8;
                textBox56.Text = intTemp.ToString("X");
                textBox55.Text = (intTemp.ToString()) + " (decimal)" + " ";

                // The 23th part is ID_type
                i = 0x0026;
                br.BaseStream.Position = i;
                ID_type = br.ReadByte().ToString("X2");
                decNum = Convert.ToInt32(ID_type, 16);
                intTemp = decNum & 0x07;
                //MessageBox.Show(intTemp.ToString("X2"));  //debug
                switch (intTemp.ToString("X2"))
                {
                    case "00":
                        textBox57.Text = "ROM";
                        break;
                    case "01":
                        textBox57.Text = "Model";
                        break;
                    case "02":
                        textBox57.Text = "Family (Commercial)";
                        break;
                    case "03":
                        textBox57.Text = "Default";
                        break;
                    default:
                        textBox57.Text = "Error - Unknown ID Type";
                        break;

                }
                textBox58.Text = intTemp.ToString("X");
                //textBox57.Text = (intTemp.ToString()) + " (decimal)" + " ";

                // The 24th part is model ID            
                for (i = 0x0027; i <= 0x0028; i++)
                {
                    br.BaseStream.Position = i;
                    model_id += br.ReadByte().ToString("X2");
                }
                decNum = Convert.ToInt32(model_id, 16);

                switch (model_id)
                {
                    case "0096":
                        dsrType = "DSR 830";                        
                        break;
                    case "0097":
                        dsrType = "DSR 800";                        
                        break;
                    case "0098":
                        dsrType = "DSR 830 - P2";                        
                        break;
                    default:
                        dsrType = "Error - Unknown DSR Type";                        
                        break;
                }

                textBox62.Text = decNum.ToString("X");
                textBox61.Text = dsrType;

                // The 25th part is min_app_ver_lvl            
                for (i = 0x0029; i <= 0x002C; i++)
                {
                    br.BaseStream.Position = i;
                    min_app_ver_lvl += br.ReadByte().ToString("X2");
                }
                decNum = Convert.ToInt32(min_app_ver_lvl, 16);
                textBox60.Text = decNum.ToString("X");
                textBox59.Text = (decNum.ToString()) + " (decimal)" + " ";

                // The 26th part is stream select            
                i = 0x002D;
                br.BaseStream.Position = i;
                stream_select = br.ReadByte().ToString("X2");
                decNum = Convert.ToInt32(stream_select, 16);
                if (decNum==0)
                {
                    streamSelect = "First Stream";
                }
                else if (decNum==1)
                {
                    streamSelect = "Second Stream";
                }
                else
                {
                    streamSelect = "Error - Unknown choice";
                }
                textBox64.Text = decNum.ToString("X");
                textBox63.Text = streamSelect;

                // The 27th part is download_ID            
                for (i = 0x002E; i <= 0x002F; i++)
                {
                    br.BaseStream.Position = i;
                    download_id += br.ReadByte().ToString("X2");                    
                }

                decNum = Convert.ToInt32(download_id, 16);
                //textBox66.Text = decNum.ToString("X");
                //textBox65.Text = (decNum.ToString()) + " (decimal)" + " ";

                intTemp = decNum & 0xFF00;
                //MessageBox.Show(intTemp.ToString("X2"));  //debug

                switch (intTemp.ToString("X2"))
                {
                    case "9600":
                        dsrType = "DSR 830";
                        textBox77.Text = dsrType;
                        break;
                    case "9700":
                        dsrType = "DSR 800";
                        textBox77.Text = dsrType;
                        break;
                    case "9800":
                        dsrType = "DSR 830 - P2";
                        textBox77.Text = dsrType;
                        break;
                    default:
                        dsrType = "Error - Unknown DSR Type";
                        textBox77.Text = dsrType;
                        break;
                }

                // to check project name
                intTemp = decNum & 0x00FF;
                //MessageBox.Show(intTemp.ToString("X2"));  //debug

                switch (intTemp.ToString("X2"))
                {
                    case "00":
                        projectType = " Copernicus";
                        break;
                    case "40":
                        projectType = " Deneb";
                        break;
                    case "80":
                        projectType = " Elnath";
                        break;
                    case "C0":
                        projectType = " Furud";
                        break;
                    default:
                        projectType = "Error-Unknown Project name";
                        break;
                }

                textBox66.Text = decNum.ToString("X");
                textBox66.BackColor = Color.Yellow;
                textBox65.Text = dsrType + projectType;
                textBox65.BackColor = Color.Yellow;
                textBox79.Text = projectType;

                // The 28th part is threshold            
                i = 0x0030;
                br.BaseStream.Position = i;
                threshold = br.ReadByte().ToString("X2");
                if(threshold=="FF")
                {
                    textBox67.Text = "Download to all population";
                }
                else
                {
                    textBox67.Text = "Download part of population";
                }
                decNum = Convert.ToInt32(threshold, 16);
                textBox68.Text = decNum.ToString("X");
                //textBox67.Text = (decNum.ToString()) + " (decimal)" + " ";

                // The 29th part is whitener            
                i = 0x0031;
                br.BaseStream.Position = i;
                whitener = br.ReadByte().ToString("X2");
                decNum = Convert.ToInt32(whitener, 16);
                if (whitener == "00")
                {
                    textBox69.Text = "Download to all population";
                }
                else
                {
                    textBox69.Text = "Download to part of population";
                }
                textBox70.Text = decNum.ToString("X");
                //textBox69.Text = (decNum.ToString()) + " (decimal)" + " ";

                // The 30th part is CRC            
                for (i = 0x0032; i <= 0x0035; i++)
                {
                    br.BaseStream.Position = i;
                    crc += br.ReadByte().ToString("X2");
                }
                decNum = Convert.ToInt32(crc, 16);
                textBox71.Text = decNum.ToString("X");


            }
            else if (intTemp == 4)  // Address Type = 4 / MultiCast
            {
                textBox26.Text = "MultiCast";
                // The fifth part is Length
                for (i = 0x0013; i <= 0x0014; i++)
                {
                    br.BaseStream.Position = i;
                    Length += br.ReadByte().ToString("X2");
                }

                decNum = Convert.ToInt32(Length, 16);
                intTemp = decNum & 0x0FFF;
                textBox19.Text = intTemp.ToString("X2");
                textBox72.Text = (intTemp.ToString()) + " (decimal)";

                // The Sixth part is mc16
                for (i = 0x0015; i <= 0x0016; i++)
                {
                    br.BaseStream.Position = i;
                    mc16 += br.ReadByte().ToString("X2");
                }
                decNum = Convert.ToInt32(mc16, 16);
                //MessageBox.Show(intTemp.ToString());  //debug

                textBox20.Text = decNum.ToString("X");
                textBox42.Text = (decNum.ToString()) + " (decimal)" + " ";

                textBox73.Text = "N/A";
                textBox74.Text = " ";

                // No UAI

                textBox76.Text = "N/A";
                textBox75.Text = " ";

                // The eigth part is Frames
                i = 0x0017;
                br.BaseStream.Position = i;
                frames = br.ReadByte().ToString("X2");
                decNum = Convert.ToInt32(frames, 16);
                intTemp = decNum & 0x80;
                textBox21.Text = intTemp.ToString("X");
                textBox28.Text = (intTemp.ToString()) + " (decimal)" + " ";

                // The ninth part is segment
                i = 0x0017;
                br.BaseStream.Position = i;
                segment = br.ReadByte().ToString("X2");
                decNum = Convert.ToInt32(segment, 16);
                intTemp = decNum & 0x40;
                textBox27.Text = intTemp.ToString("X");
                textBox29.Text = (intTemp.ToString()) + " (decimal)" + " ";

                // The tenth part is preamble
                i = 0x0017;
                br.BaseStream.Position = i;
                preamble = br.ReadByte().ToString("X2");
                decNum = Convert.ToInt32(preamble, 16);
                intTemp = decNum & 0x20;
                textBox30.Text = intTemp.ToString("X");
                textBox34.Text = (intTemp.ToString()) + " (decimal)" + " ";

                // The eleventh part is crc
                i = 0x0017;
                br.BaseStream.Position = i;
                crc = br.ReadByte().ToString("X2");
                decNum = Convert.ToInt32(crc, 16);
                intTemp = decNum & 0x10;
                textBox31.Text = intTemp.ToString("X");
                textBox35.Text = (intTemp.ToString()) + " (decimal)" + " ";

                // The 12th part is res
                i = 0x0017;
                br.BaseStream.Position = i;
                res = br.ReadByte().ToString("X2");
                decNum = Convert.ToInt32(res, 16);
                intTemp = decNum & 0x08;
                textBox32.Text = intTemp.ToString("X");
                textBox36.Text = (intTemp.ToString()) + " (decimal)" + " ";

                // The 13th part is mtv
                i = 0x0017;
                br.BaseStream.Position = i;
                mtv = br.ReadByte().ToString("X2");
                decNum = Convert.ToInt32(mtv, 16);
                intTemp = decNum & 0x07;
                textBox33.Text = intTemp.ToString("X");
                textBox37.Text = (intTemp.ToString()) + " (decimal)" + " ";

                // The 14th part is dl message subtypes
                i = 0x0018;
                br.BaseStream.Position = i;
                dl_msg_subtype = br.ReadByte().ToString("X2");
                decNum = Convert.ToInt32(dl_msg_subtype, 16);
                textBox38.Text = decNum.ToString("X");
                textBox39.Text = (decNum.ToString()) + " (decimal)" + " ";

                // The 15th part is manufacture ID            
                for (i = 0x0019; i <= 0x001A; i++)
                {
                    br.BaseStream.Position = i;
                    manufacture_id += br.ReadByte().ToString("X2");
                }

                manufacture = manufactureID(manufacture_id);

                decNum = Convert.ToInt32(manufacture_id, 16);
                
                textBox41.Text = decNum.ToString("X2");
                textBox41.BackColor = Color.LightGreen;
                textBox40.Text = manufacture;
                textBox40.BackColor = Color.LightGreen;

                // The 16th part is application ID            
                for (i = 0x001B; i <= 0x001C; i++)
                {
                    br.BaseStream.Position = i;
                    app_id += br.ReadByte().ToString("X2");
                }

                decNum = Convert.ToInt32(app_id, 16);
                textBox43.Text = app_id; //decNum.ToString("X2");
                textBox43.BackColor = Color.Yellow;
                textBox44.Text = (decNum.ToString()) + " (dec)" + " Not Shaw App # ?? No Info";
                textBox44.BackColor = Color.Yellow;

                // The 17th part is app version level            
                for (i = 0x001D; i <= 0x0020; i++)
                {
                    br.BaseStream.Position = i;
                    app_ver_lvl += br.ReadByte().ToString("X2");
                }

                decNum = Convert.ToInt32(app_ver_lvl, 16);
                textBox45.Text = decNum.ToString("X2"); //app_ver_lvl; 
                textBox45.BackColor = Color.Yellow;
                //MessageBox.Show((decNum.ToString("X2")));  //debug
                textBox78.Text = decNum.ToString("X");                
                textBox46.Text = (decNum.ToString("X2")) + " : Arris SW released #";
                textBox46.BackColor = Color.Yellow;

                // The 18th part is Force Download
                i = 0x0021;
                br.BaseStream.Position = i;
                force_dl_now = br.ReadByte().ToString("X2");
                decNum = Convert.ToInt32(force_dl_now, 16);
                intTemp = decNum & 0x80;
                //MessageBox.Show((intTemp.ToString("X2")));  //debug
                textBox47.Text = intTemp.ToString("X");
                if (intTemp == 128)
                {
                    textBox49.Text = "Force Down Load NOWW!!!";
                }
                else //if (intTemp == 0)
                {
                    textBox49.Text = "NOT force Download now ";
                }

                // The 19th part is code app mode
                i = 0x0021;
                br.BaseStream.Position = i;
                code_app_mode = br.ReadByte().ToString("X2");
                decNum = Convert.ToInt32(force_dl_now, 16);
                intTemp = decNum & 0x60;
                textBox48.Text = intTemp.ToString("X");
                textBox50.Text = (intTemp.ToString()) + " (decimal)" + " ";

                // The 20th part is resv
                i = 0x0021;
                br.BaseStream.Position = i;
                resv = br.ReadByte().ToString("X2");
                decNum = Convert.ToInt32(resv, 16);
                intTemp = decNum & 0x1F;
                textBox51.Text = intTemp.ToString("X");
                textBox52.Text = (intTemp.ToString()) + " (decimal)" + " ";

                // The 21th part is list length
                i = 0x0022;
                br.BaseStream.Position = i;
                list_length = br.ReadByte().ToString("X2");
                decNum = Convert.ToInt32(list_length, 16);
                textBox54.Text = decNum.ToString("X");
                textBox53.Text = (decNum.ToString()) + " (decimal)" + " ";

                // The 22th part is dl_resv
                i = 0x0023;
                br.BaseStream.Position = i;
                dl_resv = br.ReadByte().ToString("X2");
                //MessageBox.Show(dl_resv);  //debug
                decNum = Convert.ToInt32(dl_resv, 16);
                //MessageBox.Show(decNum.ToString());  //debug
                intTemp = decNum & 0xF8;
                textBox56.Text = intTemp.ToString("X");
                textBox55.Text = (intTemp.ToString()) + " (decimal)" + " ";

                // The 23th part is ID_type
                i = 0x0023;
                br.BaseStream.Position = i;
                ID_type = br.ReadByte().ToString("X2");
                decNum = Convert.ToInt32(ID_type, 16);
                intTemp = decNum & 0x07;

                switch (intTemp.ToString("X2"))
                {
                    case "00":
                        textBox57.Text = "ROM";
                        break;
                    case "01":
                        textBox57.Text = "Model";
                        break;
                    case "02":
                        textBox57.Text = "Family (Commercial)";
                        break;
                    case "03":
                        textBox57.Text = "Default";
                        break;
                    default:
                        textBox57.Text = "Error - Unknown ID Type";
                        break;

                }

                textBox58.Text = intTemp.ToString("X");
                //textBox57.Text = (intTemp.ToString()) + " (decimal)" + " ";

                // The 24th part is model ID            
                for (i = 0x0024; i <= 0x0025; i++)
                {
                    br.BaseStream.Position = i;
                    model_id += br.ReadByte().ToString("X2");
                }
                decNum = Convert.ToInt32(model_id, 16);

                switch (model_id)
                {
                    case "0096":
                        dsrType = "DSR 830";
                        break;
                    case "0097":
                        dsrType = "DSR 800";
                        break;
                    case "0098":
                        dsrType = "DSR 830 - P2";
                        break;
                    default:
                        dsrType = "Error - Unknown DSR Type";
                        break;
                }

                textBox62.Text = decNum.ToString("X");
                textBox61.Text = dsrType;

                // The 25th part is min_app_ver_lvl            
                for (i = 0x0026; i <= 0x0029; i++)
                {
                    br.BaseStream.Position = i;
                    min_app_ver_lvl += br.ReadByte().ToString("X2");
                }
                decNum = Convert.ToInt32(min_app_ver_lvl, 16);
                textBox60.Text = decNum.ToString("X");                
                textBox59.Text = (decNum.ToString()) + " (decimal)" + " ";

                // The 26th part is stream select            
                i = 0x002A;
                br.BaseStream.Position = i;
                stream_select = br.ReadByte().ToString("X2");
                decNum = Convert.ToInt32(stream_select, 16);
                if (decNum == 0)
                {
                    streamSelect = "First Stream";
                }
                else if (decNum == 1)
                {
                    streamSelect = "Second Stream";
                }
                else
                {
                    streamSelect = "Error - Unknown choice";
                }
                textBox64.Text = decNum.ToString("X");
                textBox63.Text = streamSelect;                

                // The 27th part is download_ID            
                for (i = 0x002B; i <= 0x002C; i++)
                {
                    br.BaseStream.Position = i;
                    download_id += br.ReadByte().ToString("X2");
                }

                decNum = Convert.ToInt32(download_id, 16);
                //textBox66.Text = decNum.ToString("X");
                //textBox65.Text = (decNum.ToString()) + " (decimal)" + " ";

                intTemp = decNum & 0xFF00;
                //MessageBox.Show(intTemp.ToString("X2"));  //debug

                switch (intTemp.ToString("X2"))
                {
                    case "9600":
                        dsrType = "DSR 830";
                        textBox77.Text = dsrType;
                        break;
                    case "9700":
                        dsrType = "DSR 800";
                        textBox77.Text = dsrType;
                        break;
                    case "9800":
                        dsrType = "DSR 830 - P2";
                        textBox77.Text = dsrType;
                        break;
                    default:
                        dsrType = "Error - Unknown DSR Type";
                        textBox77.Text = dsrType;
                        break;
                }

                // to check project name
                intTemp = decNum & 0x00FF;
                //MessageBox.Show(intTemp.ToString("X2"));  //debug

                switch (intTemp.ToString("X2"))
                {
                    case "00":
                        projectType = " Copernicus";
                        break;
                    case "40":
                        projectType = " Deneb";
                        break;
                    case "80":
                        projectType = " Elnath";
                        break;
                    case "C0":
                        projectType = " Furud";
                        break;
                    default:
                        projectType = "Error-Unknown Project name";
                        break;
                }

                textBox66.Text = decNum.ToString("X");
                textBox66.BackColor = Color.Yellow;
                textBox65.Text = dsrType + projectType;
                textBox65.BackColor = Color.Yellow;
                textBox79.Text = projectType;

                // The 28th part is threshold            
                i = 0x002D;
                br.BaseStream.Position = i;
                threshold = br.ReadByte().ToString("X2");
                if (threshold == "FF")
                {
                    textBox67.Text = "Download to all population";
                }
                else
                {
                    textBox67.Text = "Download to part of population";
                }
                decNum = Convert.ToInt32(threshold, 16);
                textBox68.Text = decNum.ToString("X");
                //textBox67.Text = (decNum.ToString()) + " (decimal)" + " ";

                // The 29th part is whitener            
                i = 0x002E;
                br.BaseStream.Position = i;
                whitener = br.ReadByte().ToString("X2");
                decNum = Convert.ToInt32(whitener, 16);
                if (whitener == "00")
                {
                    textBox69.Text = "Download to all population";
                }
                else
                {
                    textBox69.Text = "Download to part of population";
                }
                textBox70.Text = decNum.ToString("X");
                //textBox69.Text = (decNum.ToString()) + " (decimal)" + " ";

                // The 30th part is CRC            
                for (i = 0x002F; i <= 0x0032; i++)
                {
                    br.BaseStream.Position = i;
                    crc += br.ReadByte().ToString("X2");
                }
                decNum = Convert.ToInt32(crc, 16);
                textBox71.Text = decNum.ToString("X");

            }  // for Multi cast
            else
            {
                //MessageBox.Show("Unknown Address Type");  //debug
                textBox26.Text = "Broadcast";
                // The fifth part is Length
                for (i = 0x0013; i <= 0x0014; i++)
                {
                    br.BaseStream.Position = i;
                    Length += br.ReadByte().ToString("X2");
                }

                decNum = Convert.ToInt32(Length, 16);
                intTemp = decNum & 0x0FFF;
                textBox19.Text = intTemp.ToString("X2");
                textBox72.Text = (intTemp.ToString()) + " (decimal)";

                // The Sixth part is mc16
                //for (i = 0x0015; i <= 0x0016; i++)
                //{
                //    br.BaseStream.Position = i;
                //    mc16 += br.ReadByte().ToString("X2");
                //}
                //decNum = Convert.ToInt32(mc16, 16);
                //MessageBox.Show(intTemp.ToString());  //debug

                textBox20.Text = "N/A";
                textBox42.Text = " "; 

                textBox73.Text = "N/A";
                textBox74.Text = " ";

                // No UAI

                textBox76.Text = "N/A";
                textBox75.Text = " ";

                // The eigth part is Frames
                i = 0x0015;
                br.BaseStream.Position = i;
                frames = br.ReadByte().ToString("X2");
                decNum = Convert.ToInt32(frames, 16);
                intTemp = decNum & 0x80;
                textBox21.Text = intTemp.ToString("X");
                textBox28.Text = (intTemp.ToString()) + " (decimal)" + " ";

                // The ninth part is segment
                i = 0x0015;
                br.BaseStream.Position = i;
                segment = br.ReadByte().ToString("X2");
                decNum = Convert.ToInt32(segment, 16);
                intTemp = decNum & 0x40;
                textBox27.Text = intTemp.ToString("X");
                textBox29.Text = (intTemp.ToString()) + " (decimal)" + " ";

                // The tenth part is preamble
                i = 0x0015;
                br.BaseStream.Position = i;
                preamble = br.ReadByte().ToString("X2");
                decNum = Convert.ToInt32(preamble, 16);
                intTemp = decNum & 0x20;
                textBox30.Text = intTemp.ToString("X");
                textBox34.Text = (intTemp.ToString()) + " (decimal)" + " ";

                // The eleventh part is crc
                i = 0x0015;
                br.BaseStream.Position = i;
                crc = br.ReadByte().ToString("X2");
                decNum = Convert.ToInt32(crc, 16);
                intTemp = decNum & 0x10;
                textBox31.Text = intTemp.ToString("X");
                textBox35.Text = (intTemp.ToString()) + " (decimal)" + " ";

                // The 12th part is res
                i = 0x0015;
                br.BaseStream.Position = i;
                res = br.ReadByte().ToString("X2");
                decNum = Convert.ToInt32(res, 16);
                intTemp = decNum & 0x08;
                textBox32.Text = intTemp.ToString("X");
                textBox36.Text = (intTemp.ToString()) + " (decimal)" + " ";

                // The 13th part is mtv
                i = 0x0015;
                br.BaseStream.Position = i;
                mtv = br.ReadByte().ToString("X2");
                decNum = Convert.ToInt32(mtv, 16);
                intTemp = decNum & 0x07;
                textBox33.Text = intTemp.ToString("X");
                textBox37.Text = (intTemp.ToString()) + " (decimal)" + " ";

                // The 14th part is dl message subtypes
                i = 0x0016;
                br.BaseStream.Position = i;
                dl_msg_subtype = br.ReadByte().ToString("X2");
                decNum = Convert.ToInt32(dl_msg_subtype, 16);
                textBox38.Text = decNum.ToString("X");
                textBox39.Text = (decNum.ToString()) + " (decimal)" + " ";

                // The 15th part is manufacture ID            
                for (i = 0x0017; i <= 0x0018; i++)
                {
                    br.BaseStream.Position = i;
                    manufacture_id += br.ReadByte().ToString("X2");
                }

                manufacture = manufactureID(manufacture_id);

                decNum = Convert.ToInt32(manufacture_id, 16);

                textBox41.Text = decNum.ToString("X2");
                textBox41.BackColor = Color.LightGreen;
                textBox40.Text = manufacture;
                textBox40.BackColor = Color.LightGreen;

                // The 16th part is application ID            
                for (i = 0x0019; i <= 0x001A; i++)
                {
                    br.BaseStream.Position = i;
                    app_id += br.ReadByte().ToString("X2");
                }

                decNum = Convert.ToInt32(app_id, 16);
                textBox43.Text = app_id; //decNum.ToString("X2");
                textBox43.BackColor = Color.Yellow;
                textBox44.Text = (decNum.ToString()) + " (dec)" + " Not Shaw App # ?? No Info";
                textBox44.BackColor = Color.Yellow;

                // The 17th part is app version level            
                for (i = 0x001B; i <= 0x001E; i++)
                {
                    br.BaseStream.Position = i;
                    app_ver_lvl += br.ReadByte().ToString("X2");
                }

                decNum = Convert.ToInt32(app_ver_lvl, 16);
                textBox45.Text = decNum.ToString("X2"); //app_ver_lvl; 
                textBox45.BackColor = Color.Yellow;
                //MessageBox.Show((decNum.ToString("X2")));  //debug
                textBox78.Text = decNum.ToString("X");
                textBox46.Text = (decNum.ToString("X2")) + " : Arris SW released #";
                textBox46.BackColor = Color.Yellow;

                // The 18th part is Force Download
                i = 0x001F;
                br.BaseStream.Position = i;
                force_dl_now = br.ReadByte().ToString("X2");
                decNum = Convert.ToInt32(force_dl_now, 16);
                intTemp = decNum & 0x80;
                //MessageBox.Show((intTemp.ToString("X2")));  //debug
                textBox47.Text = intTemp.ToString("X");
                if (intTemp == 128)
                {
                    textBox49.Text = "Force Down Load NOWW!!!";
                }
                else //if (intTemp == 0)
                {
                    textBox49.Text = "NOT force Download now ";
                }

                // The 19th part is code app mode
                i = 0x001F;
                br.BaseStream.Position = i;
                code_app_mode = br.ReadByte().ToString("X2");
                decNum = Convert.ToInt32(force_dl_now, 16);
                intTemp = decNum & 0x60;
                textBox48.Text = intTemp.ToString("X");
                textBox50.Text = (intTemp.ToString()) + " (decimal)" + " ";

                // The 20th part is resv
                i = 0x001F;
                br.BaseStream.Position = i;
                resv = br.ReadByte().ToString("X2");
                decNum = Convert.ToInt32(resv, 16);
                intTemp = decNum & 0x1F;
                textBox51.Text = intTemp.ToString("X");
                textBox52.Text = (intTemp.ToString()) + " (decimal)" + " ";

                // The 21th part is list length
                i = 0x0020;
                br.BaseStream.Position = i;
                list_length = br.ReadByte().ToString("X2");
                decNum = Convert.ToInt32(list_length, 16);
                textBox54.Text = decNum.ToString("X");
                textBox53.Text = (decNum.ToString()) + " (decimal)" + " ";

                // The 22th part is dl_resv
                i = 0x0021;
                br.BaseStream.Position = i;
                dl_resv = br.ReadByte().ToString("X2");
                //MessageBox.Show(dl_resv);  //debug
                decNum = Convert.ToInt32(dl_resv, 16);
                //MessageBox.Show(decNum.ToString());  //debug
                intTemp = decNum & 0xF8;
                textBox56.Text = intTemp.ToString("X");
                textBox55.Text = (intTemp.ToString()) + " (decimal)" + " ";

                // The 23th part is ID_type
                i = 0x0021;
                br.BaseStream.Position = i;
                ID_type = br.ReadByte().ToString("X2");
                decNum = Convert.ToInt32(ID_type, 16);
                intTemp = decNum & 0x07;

                switch (intTemp.ToString("X2"))
                {
                    case "00":
                        textBox57.Text = "ROM";
                        break;
                    case "01":
                        textBox57.Text = "Model";
                        break;
                    case "02":
                        textBox57.Text = "Family (Commercial)";
                        break;
                    case "03":
                        textBox57.Text = "Default";
                        break;
                    default:
                        textBox57.Text = "Error - Unknown ID Type";
                        break;

                }

                textBox58.Text = intTemp.ToString("X");
                //textBox57.Text = (intTemp.ToString()) + " (decimal)" + " ";

                // The 24th part is model ID            
                for (i = 0x0022; i <= 0x0023; i++)
                {
                    br.BaseStream.Position = i;
                    model_id += br.ReadByte().ToString("X2");
                }
                decNum = Convert.ToInt32(model_id, 16);

                switch (model_id)
                {
                    case "0100":
                        dsrType = "All";
                        break;
                    case "0096":
                        dsrType = "DSR 830";
                        break;
                    case "0097":
                        dsrType = "DSR 800";
                        break;
                    case "0098":
                        dsrType = "DSR 830 - P2";
                        break;
                    default:
                        dsrType = "Error - Unknown DSR Type";
                        break;
                }

                textBox62.Text = decNum.ToString("X");
                textBox61.Text = dsrType;

                // The 25th part is min_app_ver_lvl            
                for (i = 0x0024; i <= 0x0027; i++)
                {
                    br.BaseStream.Position = i;
                    min_app_ver_lvl += br.ReadByte().ToString("X2");
                }
                decNum = Convert.ToInt32(min_app_ver_lvl, 16);
                textBox60.Text = decNum.ToString("X");
                textBox59.Text = (decNum.ToString()) + " (decimal)" + " ";

                // The 26th part is stream select            
                i = 0x0028;
                br.BaseStream.Position = i;
                stream_select = br.ReadByte().ToString("X2");
                decNum = Convert.ToInt32(stream_select, 16);
                if (decNum == 0)
                {
                    streamSelect = "First Stream";
                }
                else if (decNum == 1)
                {
                    streamSelect = "Second Stream";
                }
                else
                {
                    streamSelect = "Error - Unknown choice";
                }
                textBox64.Text = decNum.ToString("X");
                textBox63.Text = streamSelect;

                // The 27th part is download_ID            
                for (i = 0x0029; i <= 0x002A; i++)
                {
                    br.BaseStream.Position = i;
                    download_id += br.ReadByte().ToString("X2");
                }

                decNum = Convert.ToInt32(download_id, 16);
                //textBox66.Text = decNum.ToString("X");
                //textBox65.Text = (decNum.ToString()) + " (decimal)" + " ";

                intTemp = decNum & 0xFF00;
                //MessageBox.Show(intTemp.ToString("X2"));  //debug

                switch (intTemp.ToString("X2"))
                {
                    case "9600":
                        dsrType = "DSR 830";
                        textBox77.Text = dsrType;
                        break;
                    case "9700":
                        dsrType = "DSR 800";
                        textBox77.Text = dsrType;
                        break;
                    case "9800":
                        dsrType = "DSR 830 - P2";
                        textBox77.Text = dsrType;
                        break;
                    default:
                        dsrType = "Error - Unknown DSR Type";
                        textBox77.Text = dsrType;
                        break;
                }

                // to check project name
                intTemp = decNum & 0x00FF;
                //MessageBox.Show(intTemp.ToString("X2"));  //debug

                switch (intTemp.ToString("X2"))
                {
                    case "00":
                        projectType = " Copernicus";
                        break;
                    case "40":
                        projectType = " Deneb";
                        break;
                    case "80":
                        projectType = " Elnath";
                        break;
                    case "C0":
                        projectType = " Furud";
                        break;
                    default:
                        projectType = "Error-Unknown Project name";
                        break;
                }

                textBox66.Text = decNum.ToString("X");
                textBox66.BackColor = Color.Yellow;
                textBox65.Text = dsrType + projectType;
                textBox65.BackColor = Color.Yellow;
                textBox79.Text = projectType;

                // The 28th part is threshold            
                i = 0x002B;
                br.BaseStream.Position = i;
                threshold = br.ReadByte().ToString("X2");
                if (threshold == "FF")
                {
                    textBox67.Text = "Download to all population";
                }
                else
                {
                    textBox67.Text = "Download to part of population";
                }
                decNum = Convert.ToInt32(threshold, 16);
                textBox68.Text = decNum.ToString("X");
                //textBox67.Text = (decNum.ToString()) + " (decimal)" + " ";

                // The 29th part is whitener            
                i = 0x002C;
                br.BaseStream.Position = i;
                whitener = br.ReadByte().ToString("X2");
                decNum = Convert.ToInt32(whitener, 16);
                if (whitener == "00")
                {
                    textBox69.Text = "Download to all population";
                }
                else
                {
                    textBox69.Text = "Download to part of population";
                }
                textBox70.Text = decNum.ToString("X");
                //textBox69.Text = (decNum.ToString()) + " (decimal)" + " ";

                // The 30th part is CRC            
                for (i = 0x002D; i <= 0x0030; i++)
                {
                    br.BaseStream.Position = i;
                    crc += br.ReadByte().ToString("X2");
                }
                decNum = Convert.ToInt32(crc, 16);
                textBox71.Text = decNum.ToString("X");

            } // for Broadcast choice           

            br.Close();

        } // end of private void button2_Click(object sender, EventArgs e)

        private string descriptionTag(string descTag)
        {
            string desc_Tag = null;

            switch (descTag)
            {
                case "00":
                    desc_Tag = "COMP_STORED";
                    break;
                case "01":
                    desc_Tag = "SAC_UCS_QUEUE";
                    break;
                case "02":
                    desc_Tag = "ACTIVATION_TIME";
                    break;
                case "03":
                    desc_Tag = "COMP_REDUCED2";
                    break;
                case "04":
                    desc_Tag = "COMP_REDUCED3";
                    break;
                case "05":
                    desc_Tag = "SAC_UCS_DELIMITER";
                    break;
                case "06":
                    desc_Tag = "COMP_IMPLODED";
                    break;
                case "07":
                    desc_Tag = "COMP_TOKEN";
                    break;
                case "08":
                    desc_Tag = "COMP_DEFLATE";
                    break;
                case "09":
                    desc_Tag = "COMP_DEFLATE64";
                    break;
                default:
                    desc_Tag = "UNKNOWN Description Tag";
                    break;
            }

            return desc_Tag;
        }

        private string manufactureID(string manufacture_id)
        {
            string manufactureID = null;

            switch (manufacture_id)
            {
                case "0000":
                    manufactureID = "unknown/undefined";
                    break;
                case "4454":
                    manufactureID = "DT (Digitrans)";
                    break;
                case "4749":
                    manufactureID = "GI (General Instrument/Arris)";
                    break;
                case "4850":
                    manufactureID = "HP (Hewlett Packard)";
                    break;
                case "5041":
                    manufactureID = "PA (Pace)";
                    break;
                case "504E":
                    manufactureID = "Panasonic";
                    break;
                case "5341":
                    manufactureID = "SA (Scientific Atlanta)";
                    break;
                case "5A4E":
                    manufactureID = "ZN (Zenith)";
                    break;
                case "FFFF":
                    manufactureID = "Universal (all manufacturers";
                    break;                
                default:
                    manufactureID = "Reserved (TBA)";
                    break;
            }

            return manufactureID;
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void textBox3_TextChanged(object sender, EventArgs e)
        {

        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void label18_Click(object sender, EventArgs e)
        {

        }

        private void textBox21_TextChanged(object sender, EventArgs e)
        {

        }

        private void textBox28_TextChanged(object sender, EventArgs e)
        {

        }

        private void label19_Click(object sender, EventArgs e)
        {

        }

        private void textBox27_TextChanged(object sender, EventArgs e)
        {

        }

        private void textBox59_TextChanged(object sender, EventArgs e)
        {

        }

        private void textBox60_TextChanged(object sender, EventArgs e)
        {

        }
    }
}
