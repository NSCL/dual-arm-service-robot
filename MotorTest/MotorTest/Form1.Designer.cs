namespace MotorTest
{
    partial class Form1
    {
        /// <summary>
        /// 필수 디자이너 변수입니다.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// 사용 중인 모든 리소스를 정리합니다.
        /// </summary>
        /// <param name="disposing">관리되는 리소스를 삭제해야 하면 true이고, 그렇지 않으면 false입니다.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form 디자이너에서 생성한 코드

        /// <summary>
        /// 디자이너 지원에 필요한 메서드입니다.
        /// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
        /// </summary>
        private void InitializeComponent()
        {
            this.components = new System.ComponentModel.Container();
            this.txt_connect = new System.Windows.Forms.TextBox();
            this.btn_connect = new System.Windows.Forms.Button();
            this.btnIN = new System.Windows.Forms.Button();
            this.btntimer = new System.Windows.Forms.Button();
            this.btnMotion = new System.Windows.Forms.Button();
            this.txtdeg6 = new System.Windows.Forms.TextBox();
            this.txtdeg5 = new System.Windows.Forms.TextBox();
            this.txtdeg4 = new System.Windows.Forms.TextBox();
            this.txtdeg3 = new System.Windows.Forms.TextBox();
            this.txtdeg2 = new System.Windows.Forms.TextBox();
            this.txtdeg1 = new System.Windows.Forms.TextBox();
            this.btnRun = new System.Windows.Forms.Button();
            this.txtRun = new System.Windows.Forms.TextBox();
            this.groupBox7 = new System.Windows.Forms.GroupBox();
            this.groupBox6 = new System.Windows.Forms.GroupBox();
            this.radioBtnR6 = new System.Windows.Forms.RadioButton();
            this.radioBtnL6 = new System.Windows.Forms.RadioButton();
            this.txt_J6 = new System.Windows.Forms.TextBox();
            this.groupBox5 = new System.Windows.Forms.GroupBox();
            this.radioBtnR5 = new System.Windows.Forms.RadioButton();
            this.radioBtnL5 = new System.Windows.Forms.RadioButton();
            this.txt_J5 = new System.Windows.Forms.TextBox();
            this.groupBox4 = new System.Windows.Forms.GroupBox();
            this.radioBtnR4 = new System.Windows.Forms.RadioButton();
            this.radioBtnL4 = new System.Windows.Forms.RadioButton();
            this.txt_J4 = new System.Windows.Forms.TextBox();
            this.groupBox3 = new System.Windows.Forms.GroupBox();
            this.radioBtnR3 = new System.Windows.Forms.RadioButton();
            this.radioBtnL3 = new System.Windows.Forms.RadioButton();
            this.txt_J3 = new System.Windows.Forms.TextBox();
            this.groupBox2 = new System.Windows.Forms.GroupBox();
            this.radioBtnR2 = new System.Windows.Forms.RadioButton();
            this.radioBtnL2 = new System.Windows.Forms.RadioButton();
            this.txt_J2 = new System.Windows.Forms.TextBox();
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.radioBtnR1 = new System.Windows.Forms.RadioButton();
            this.radioBtnL1 = new System.Windows.Forms.RadioButton();
            this.txt_J1 = new System.Windows.Forms.TextBox();
            this.btn0 = new System.Windows.Forms.Button();
            this.btn_Start = new System.Windows.Forms.Button();
            this.Angletimer = new System.Windows.Forms.Timer(this.components);
            this.groupBox7.SuspendLayout();
            this.groupBox6.SuspendLayout();
            this.groupBox5.SuspendLayout();
            this.groupBox4.SuspendLayout();
            this.groupBox3.SuspendLayout();
            this.groupBox2.SuspendLayout();
            this.groupBox1.SuspendLayout();
            this.SuspendLayout();
            // 
            // txt_connect
            // 
            this.txt_connect.Location = new System.Drawing.Point(12, 12);
            this.txt_connect.Name = "txt_connect";
            this.txt_connect.Size = new System.Drawing.Size(100, 21);
            this.txt_connect.TabIndex = 3;
            // 
            // btn_connect
            // 
            this.btn_connect.Location = new System.Drawing.Point(118, 12);
            this.btn_connect.Name = "btn_connect";
            this.btn_connect.Size = new System.Drawing.Size(75, 23);
            this.btn_connect.TabIndex = 2;
            this.btn_connect.Text = "Connect";
            this.btn_connect.UseVisualStyleBackColor = true;
            this.btn_connect.Click += new System.EventHandler(this.btn_connect_Click);
            // 
            // btnIN
            // 
            this.btnIN.Location = new System.Drawing.Point(285, 224);
            this.btnIN.Name = "btnIN";
            this.btnIN.Size = new System.Drawing.Size(75, 23);
            this.btnIN.TabIndex = 116;
            this.btnIN.Text = "IN";
            this.btnIN.UseVisualStyleBackColor = true;
            // 
            // btntimer
            // 
            this.btntimer.Location = new System.Drawing.Point(285, 253);
            this.btntimer.Name = "btntimer";
            this.btntimer.Size = new System.Drawing.Size(75, 23);
            this.btntimer.TabIndex = 115;
            this.btntimer.Text = "TIMER";
            this.btntimer.UseVisualStyleBackColor = true;
            // 
            // btnMotion
            // 
            this.btnMotion.Location = new System.Drawing.Point(195, 254);
            this.btnMotion.Name = "btnMotion";
            this.btnMotion.Size = new System.Drawing.Size(69, 23);
            this.btnMotion.TabIndex = 114;
            this.btnMotion.Text = "Move";
            this.btnMotion.UseVisualStyleBackColor = true;
            this.btnMotion.Click += new System.EventHandler(this.btnMotion_Click);
            // 
            // txtdeg6
            // 
            this.txtdeg6.Location = new System.Drawing.Point(195, 227);
            this.txtdeg6.Name = "txtdeg6";
            this.txtdeg6.Size = new System.Drawing.Size(69, 21);
            this.txtdeg6.TabIndex = 113;
            // 
            // txtdeg5
            // 
            this.txtdeg5.Location = new System.Drawing.Point(195, 196);
            this.txtdeg5.Name = "txtdeg5";
            this.txtdeg5.Size = new System.Drawing.Size(69, 21);
            this.txtdeg5.TabIndex = 112;
            // 
            // txtdeg4
            // 
            this.txtdeg4.Location = new System.Drawing.Point(195, 164);
            this.txtdeg4.Name = "txtdeg4";
            this.txtdeg4.Size = new System.Drawing.Size(69, 21);
            this.txtdeg4.TabIndex = 111;
            // 
            // txtdeg3
            // 
            this.txtdeg3.Location = new System.Drawing.Point(195, 129);
            this.txtdeg3.Name = "txtdeg3";
            this.txtdeg3.Size = new System.Drawing.Size(69, 21);
            this.txtdeg3.TabIndex = 110;
            // 
            // txtdeg2
            // 
            this.txtdeg2.Location = new System.Drawing.Point(195, 97);
            this.txtdeg2.Name = "txtdeg2";
            this.txtdeg2.Size = new System.Drawing.Size(69, 21);
            this.txtdeg2.TabIndex = 109;
            // 
            // txtdeg1
            // 
            this.txtdeg1.Location = new System.Drawing.Point(195, 65);
            this.txtdeg1.Name = "txtdeg1";
            this.txtdeg1.Size = new System.Drawing.Size(69, 21);
            this.txtdeg1.TabIndex = 105;
            // 
            // btnRun
            // 
            this.btnRun.Location = new System.Drawing.Point(291, 152);
            this.btnRun.Name = "btnRun";
            this.btnRun.Size = new System.Drawing.Size(69, 23);
            this.btnRun.TabIndex = 108;
            this.btnRun.Text = "Run";
            this.btnRun.UseVisualStyleBackColor = true;
            this.btnRun.Click += new System.EventHandler(this.btnRun_Click);
            // 
            // txtRun
            // 
            this.txtRun.Location = new System.Drawing.Point(291, 67);
            this.txtRun.Name = "txtRun";
            this.txtRun.Size = new System.Drawing.Size(69, 21);
            this.txtRun.TabIndex = 107;
            this.txtRun.TextChanged += new System.EventHandler(this.txtRun_TextChanged);
            // 
            // groupBox7
            // 
            this.groupBox7.Controls.Add(this.groupBox6);
            this.groupBox7.Controls.Add(this.groupBox5);
            this.groupBox7.Controls.Add(this.groupBox4);
            this.groupBox7.Controls.Add(this.groupBox3);
            this.groupBox7.Controls.Add(this.groupBox2);
            this.groupBox7.Controls.Add(this.groupBox1);
            this.groupBox7.Location = new System.Drawing.Point(15, 51);
            this.groupBox7.Name = "groupBox7";
            this.groupBox7.Size = new System.Drawing.Size(170, 243);
            this.groupBox7.TabIndex = 106;
            this.groupBox7.TabStop = false;
            this.groupBox7.Text = "groupBox7";
            // 
            // groupBox6
            // 
            this.groupBox6.Controls.Add(this.radioBtnR6);
            this.groupBox6.Controls.Add(this.radioBtnL6);
            this.groupBox6.Controls.Add(this.txt_J6);
            this.groupBox6.Location = new System.Drawing.Point(22, 194);
            this.groupBox6.Name = "groupBox6";
            this.groupBox6.Size = new System.Drawing.Size(135, 34);
            this.groupBox6.TabIndex = 31;
            this.groupBox6.TabStop = false;
            this.groupBox6.Text = "J6";
            // 
            // radioBtnR6
            // 
            this.radioBtnR6.AutoSize = true;
            this.radioBtnR6.Location = new System.Drawing.Point(5, 12);
            this.radioBtnR6.Name = "radioBtnR6";
            this.radioBtnR6.Size = new System.Drawing.Size(31, 16);
            this.radioBtnR6.TabIndex = 16;
            this.radioBtnR6.TabStop = true;
            this.radioBtnR6.Text = "R";
            this.radioBtnR6.UseVisualStyleBackColor = true;
            // 
            // radioBtnL6
            // 
            this.radioBtnL6.AutoSize = true;
            this.radioBtnL6.Location = new System.Drawing.Point(42, 12);
            this.radioBtnL6.Name = "radioBtnL6";
            this.radioBtnL6.Size = new System.Drawing.Size(30, 16);
            this.radioBtnL6.TabIndex = 17;
            this.radioBtnL6.TabStop = true;
            this.radioBtnL6.Text = "L";
            this.radioBtnL6.UseVisualStyleBackColor = true;
            // 
            // txt_J6
            // 
            this.txt_J6.Location = new System.Drawing.Point(83, 7);
            this.txt_J6.Name = "txt_J6";
            this.txt_J6.Size = new System.Drawing.Size(52, 21);
            this.txt_J6.TabIndex = 3;
            // 
            // groupBox5
            // 
            this.groupBox5.Controls.Add(this.radioBtnR5);
            this.groupBox5.Controls.Add(this.radioBtnL5);
            this.groupBox5.Controls.Add(this.txt_J5);
            this.groupBox5.Location = new System.Drawing.Point(22, 160);
            this.groupBox5.Name = "groupBox5";
            this.groupBox5.Size = new System.Drawing.Size(135, 34);
            this.groupBox5.TabIndex = 31;
            this.groupBox5.TabStop = false;
            this.groupBox5.Text = "J5";
            // 
            // radioBtnR5
            // 
            this.radioBtnR5.AutoSize = true;
            this.radioBtnR5.Location = new System.Drawing.Point(5, 12);
            this.radioBtnR5.Name = "radioBtnR5";
            this.radioBtnR5.Size = new System.Drawing.Size(31, 16);
            this.radioBtnR5.TabIndex = 16;
            this.radioBtnR5.TabStop = true;
            this.radioBtnR5.Text = "R";
            this.radioBtnR5.UseVisualStyleBackColor = true;
            // 
            // radioBtnL5
            // 
            this.radioBtnL5.AutoSize = true;
            this.radioBtnL5.Location = new System.Drawing.Point(42, 12);
            this.radioBtnL5.Name = "radioBtnL5";
            this.radioBtnL5.Size = new System.Drawing.Size(30, 16);
            this.radioBtnL5.TabIndex = 17;
            this.radioBtnL5.TabStop = true;
            this.radioBtnL5.Text = "L";
            this.radioBtnL5.UseVisualStyleBackColor = true;
            // 
            // txt_J5
            // 
            this.txt_J5.Location = new System.Drawing.Point(83, 11);
            this.txt_J5.Name = "txt_J5";
            this.txt_J5.Size = new System.Drawing.Size(52, 21);
            this.txt_J5.TabIndex = 7;
            // 
            // groupBox4
            // 
            this.groupBox4.Controls.Add(this.radioBtnR4);
            this.groupBox4.Controls.Add(this.radioBtnL4);
            this.groupBox4.Controls.Add(this.txt_J4);
            this.groupBox4.Location = new System.Drawing.Point(22, 126);
            this.groupBox4.Name = "groupBox4";
            this.groupBox4.Size = new System.Drawing.Size(135, 34);
            this.groupBox4.TabIndex = 31;
            this.groupBox4.TabStop = false;
            this.groupBox4.Text = "J4";
            // 
            // radioBtnR4
            // 
            this.radioBtnR4.AutoSize = true;
            this.radioBtnR4.Location = new System.Drawing.Point(5, 12);
            this.radioBtnR4.Name = "radioBtnR4";
            this.radioBtnR4.Size = new System.Drawing.Size(31, 16);
            this.radioBtnR4.TabIndex = 16;
            this.radioBtnR4.TabStop = true;
            this.radioBtnR4.Text = "R";
            this.radioBtnR4.UseVisualStyleBackColor = true;
            // 
            // radioBtnL4
            // 
            this.radioBtnL4.AutoSize = true;
            this.radioBtnL4.Location = new System.Drawing.Point(42, 12);
            this.radioBtnL4.Name = "radioBtnL4";
            this.radioBtnL4.Size = new System.Drawing.Size(30, 16);
            this.radioBtnL4.TabIndex = 17;
            this.radioBtnL4.TabStop = true;
            this.radioBtnL4.Text = "L";
            this.radioBtnL4.UseVisualStyleBackColor = true;
            // 
            // txt_J4
            // 
            this.txt_J4.Location = new System.Drawing.Point(83, 11);
            this.txt_J4.Name = "txt_J4";
            this.txt_J4.Size = new System.Drawing.Size(52, 21);
            this.txt_J4.TabIndex = 6;
            // 
            // groupBox3
            // 
            this.groupBox3.Controls.Add(this.radioBtnR3);
            this.groupBox3.Controls.Add(this.radioBtnL3);
            this.groupBox3.Controls.Add(this.txt_J3);
            this.groupBox3.Location = new System.Drawing.Point(22, 97);
            this.groupBox3.Name = "groupBox3";
            this.groupBox3.Size = new System.Drawing.Size(135, 34);
            this.groupBox3.TabIndex = 30;
            this.groupBox3.TabStop = false;
            this.groupBox3.Text = "J3";
            // 
            // radioBtnR3
            // 
            this.radioBtnR3.AutoSize = true;
            this.radioBtnR3.Location = new System.Drawing.Point(5, 12);
            this.radioBtnR3.Name = "radioBtnR3";
            this.radioBtnR3.Size = new System.Drawing.Size(31, 16);
            this.radioBtnR3.TabIndex = 16;
            this.radioBtnR3.TabStop = true;
            this.radioBtnR3.Text = "R";
            this.radioBtnR3.UseVisualStyleBackColor = true;
            // 
            // radioBtnL3
            // 
            this.radioBtnL3.AutoSize = true;
            this.radioBtnL3.Location = new System.Drawing.Point(42, 12);
            this.radioBtnL3.Name = "radioBtnL3";
            this.radioBtnL3.Size = new System.Drawing.Size(30, 16);
            this.radioBtnL3.TabIndex = 17;
            this.radioBtnL3.TabStop = true;
            this.radioBtnL3.Text = "L";
            this.radioBtnL3.UseVisualStyleBackColor = true;
            // 
            // txt_J3
            // 
            this.txt_J3.Location = new System.Drawing.Point(83, 8);
            this.txt_J3.Name = "txt_J3";
            this.txt_J3.Size = new System.Drawing.Size(52, 21);
            this.txt_J3.TabIndex = 5;
            // 
            // groupBox2
            // 
            this.groupBox2.Controls.Add(this.radioBtnR2);
            this.groupBox2.Controls.Add(this.radioBtnL2);
            this.groupBox2.Controls.Add(this.txt_J2);
            this.groupBox2.Location = new System.Drawing.Point(22, 63);
            this.groupBox2.Name = "groupBox2";
            this.groupBox2.Size = new System.Drawing.Size(135, 34);
            this.groupBox2.TabIndex = 29;
            this.groupBox2.TabStop = false;
            this.groupBox2.Text = "J2";
            // 
            // radioBtnR2
            // 
            this.radioBtnR2.AutoSize = true;
            this.radioBtnR2.Location = new System.Drawing.Point(5, 12);
            this.radioBtnR2.Name = "radioBtnR2";
            this.radioBtnR2.Size = new System.Drawing.Size(31, 16);
            this.radioBtnR2.TabIndex = 16;
            this.radioBtnR2.TabStop = true;
            this.radioBtnR2.Text = "R";
            this.radioBtnR2.UseVisualStyleBackColor = true;
            // 
            // radioBtnL2
            // 
            this.radioBtnL2.AutoSize = true;
            this.radioBtnL2.Location = new System.Drawing.Point(42, 12);
            this.radioBtnL2.Name = "radioBtnL2";
            this.radioBtnL2.Size = new System.Drawing.Size(30, 16);
            this.radioBtnL2.TabIndex = 17;
            this.radioBtnL2.TabStop = true;
            this.radioBtnL2.Text = "L";
            this.radioBtnL2.UseVisualStyleBackColor = true;
            // 
            // txt_J2
            // 
            this.txt_J2.Location = new System.Drawing.Point(83, 9);
            this.txt_J2.Name = "txt_J2";
            this.txt_J2.Size = new System.Drawing.Size(52, 21);
            this.txt_J2.TabIndex = 4;
            // 
            // groupBox1
            // 
            this.groupBox1.Controls.Add(this.radioBtnR1);
            this.groupBox1.Controls.Add(this.radioBtnL1);
            this.groupBox1.Controls.Add(this.txt_J1);
            this.groupBox1.Location = new System.Drawing.Point(22, 29);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(135, 34);
            this.groupBox1.TabIndex = 28;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "J1";
            // 
            // radioBtnR1
            // 
            this.radioBtnR1.AutoSize = true;
            this.radioBtnR1.Location = new System.Drawing.Point(5, 12);
            this.radioBtnR1.Name = "radioBtnR1";
            this.radioBtnR1.Size = new System.Drawing.Size(31, 16);
            this.radioBtnR1.TabIndex = 16;
            this.radioBtnR1.TabStop = true;
            this.radioBtnR1.Text = "R";
            this.radioBtnR1.UseVisualStyleBackColor = true;
            // 
            // radioBtnL1
            // 
            this.radioBtnL1.AutoSize = true;
            this.radioBtnL1.Location = new System.Drawing.Point(42, 12);
            this.radioBtnL1.Name = "radioBtnL1";
            this.radioBtnL1.Size = new System.Drawing.Size(30, 16);
            this.radioBtnL1.TabIndex = 17;
            this.radioBtnL1.TabStop = true;
            this.radioBtnL1.Text = "L";
            this.radioBtnL1.UseVisualStyleBackColor = true;
            // 
            // txt_J1
            // 
            this.txt_J1.Location = new System.Drawing.Point(83, 11);
            this.txt_J1.Name = "txt_J1";
            this.txt_J1.Size = new System.Drawing.Size(52, 21);
            this.txt_J1.TabIndex = 2;
            // 
            // btn0
            // 
            this.btn0.Location = new System.Drawing.Point(291, 94);
            this.btn0.Name = "btn0";
            this.btn0.Size = new System.Drawing.Size(69, 23);
            this.btn0.TabIndex = 104;
            this.btn0.Text = "0도";
            this.btn0.UseVisualStyleBackColor = true;
            this.btn0.Click += new System.EventHandler(this.btn0_Click);
            // 
            // btn_Start
            // 
            this.btn_Start.Location = new System.Drawing.Point(291, 123);
            this.btn_Start.Name = "btn_Start";
            this.btn_Start.Size = new System.Drawing.Size(69, 23);
            this.btn_Start.TabIndex = 103;
            this.btn_Start.Text = "90도";
            this.btn_Start.UseVisualStyleBackColor = true;
            this.btn_Start.Click += new System.EventHandler(this.btn_Start_Click);
            // 
            // Angletimer
            // 
            this.Angletimer.Tick += new System.EventHandler(this.Angletimer_Tick);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(407, 326);
            this.Controls.Add(this.btnIN);
            this.Controls.Add(this.btntimer);
            this.Controls.Add(this.btnMotion);
            this.Controls.Add(this.txtdeg6);
            this.Controls.Add(this.txtdeg5);
            this.Controls.Add(this.txtdeg4);
            this.Controls.Add(this.txtdeg3);
            this.Controls.Add(this.txtdeg2);
            this.Controls.Add(this.txtdeg1);
            this.Controls.Add(this.btnRun);
            this.Controls.Add(this.txtRun);
            this.Controls.Add(this.groupBox7);
            this.Controls.Add(this.btn0);
            this.Controls.Add(this.btn_Start);
            this.Controls.Add(this.txt_connect);
            this.Controls.Add(this.btn_connect);
            this.Name = "Form1";
            this.Text = "Form1";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.groupBox7.ResumeLayout(false);
            this.groupBox6.ResumeLayout(false);
            this.groupBox6.PerformLayout();
            this.groupBox5.ResumeLayout(false);
            this.groupBox5.PerformLayout();
            this.groupBox4.ResumeLayout(false);
            this.groupBox4.PerformLayout();
            this.groupBox3.ResumeLayout(false);
            this.groupBox3.PerformLayout();
            this.groupBox2.ResumeLayout(false);
            this.groupBox2.PerformLayout();
            this.groupBox1.ResumeLayout(false);
            this.groupBox1.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.TextBox txt_connect;
        private System.Windows.Forms.Button btn_connect;
        public System.Windows.Forms.Button btnIN;
        private System.Windows.Forms.Button btntimer;
        private System.Windows.Forms.Button btnMotion;
        private System.Windows.Forms.TextBox txtdeg6;
        private System.Windows.Forms.TextBox txtdeg5;
        private System.Windows.Forms.TextBox txtdeg4;
        private System.Windows.Forms.TextBox txtdeg3;
        private System.Windows.Forms.TextBox txtdeg2;
        private System.Windows.Forms.TextBox txtdeg1;
        private System.Windows.Forms.Button btnRun;
        private System.Windows.Forms.TextBox txtRun;
        private System.Windows.Forms.GroupBox groupBox7;
        private System.Windows.Forms.GroupBox groupBox6;
        private System.Windows.Forms.RadioButton radioBtnR6;
        private System.Windows.Forms.RadioButton radioBtnL6;
        private System.Windows.Forms.TextBox txt_J6;
        private System.Windows.Forms.GroupBox groupBox5;
        private System.Windows.Forms.RadioButton radioBtnR5;
        private System.Windows.Forms.RadioButton radioBtnL5;
        private System.Windows.Forms.TextBox txt_J5;
        private System.Windows.Forms.GroupBox groupBox4;
        private System.Windows.Forms.RadioButton radioBtnR4;
        private System.Windows.Forms.RadioButton radioBtnL4;
        private System.Windows.Forms.TextBox txt_J4;
        private System.Windows.Forms.GroupBox groupBox3;
        private System.Windows.Forms.RadioButton radioBtnR3;
        private System.Windows.Forms.RadioButton radioBtnL3;
        private System.Windows.Forms.TextBox txt_J3;
        private System.Windows.Forms.GroupBox groupBox2;
        private System.Windows.Forms.RadioButton radioBtnR2;
        private System.Windows.Forms.RadioButton radioBtnL2;
        private System.Windows.Forms.TextBox txt_J2;
        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.RadioButton radioBtnR1;
        private System.Windows.Forms.RadioButton radioBtnL1;
        private System.Windows.Forms.TextBox txt_J1;
        private System.Windows.Forms.Button btn0;
        private System.Windows.Forms.Button btn_Start;
        private System.Windows.Forms.Timer Angletimer;
    }
}

