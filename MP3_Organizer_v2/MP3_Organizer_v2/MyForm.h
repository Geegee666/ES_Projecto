#pragma once
#include "Create_Album.h"
#include "Delete.h"

namespace MP3_Organizer_v2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			// Set the start position of the form to the center of the screen.
			this->StartPosition = FormStartPosition::CenterScreen;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  menuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  sairToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  albumToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  criarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  apagarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  procurarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  playlistToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  criarToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  apagarToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  procurarToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  musicaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  apagarToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  procurarToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  ajudaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ajudaToolStripMenuItem1;
	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	private: System::Windows::Forms::SplitContainer^  splitContainer2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::SplitContainer^  splitContainer3;
	private: System::Windows::Forms::Button^  Bfirst_track;
	private: System::Windows::Forms::Button^  Bplay;
	private: System::Windows::Forms::Button^  Bpause;
	private: System::Windows::Forms::Button^  Bmute;
	private: System::Windows::Forms::Button^  Bstop;
	private: System::Windows::Forms::Button^  Bshuffle;
	private: System::Windows::Forms::Button^  Blast_track;
	private: System::Windows::Forms::Button^  Breplay;
	private: System::Windows::Forms::SplitContainer^  splitContainer4;
	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TrackBar^  trackBar1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::SplitContainer^  splitContainer5;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::SplitContainer^  splitContainer6;
	private: System::Windows::Forms::TreeView^  treeView1;
	private: System::Windows::Forms::TreeView^  treeView2;
	private: System::Windows::Forms::ToolStripMenuItem^  adicionarMúsicaToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  adicionarMúsicaToolStripMenuItem;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			System::Windows::Forms::TreeNode^  treeNode1 = (gcnew System::Windows::Forms::TreeNode(L"Music_1"));
			System::Windows::Forms::TreeNode^  treeNode2 = (gcnew System::Windows::Forms::TreeNode(L"Music_2"));
			System::Windows::Forms::TreeNode^  treeNode3 = (gcnew System::Windows::Forms::TreeNode(L"Playlist_1", gcnew cli::array< System::Windows::Forms::TreeNode^  >(2) {
				treeNode1,
					treeNode2
			}));
			System::Windows::Forms::TreeNode^  treeNode4 = (gcnew System::Windows::Forms::TreeNode(L"Music_1"));
			System::Windows::Forms::TreeNode^  treeNode5 = (gcnew System::Windows::Forms::TreeNode(L"Music_2"));
			System::Windows::Forms::TreeNode^  treeNode6 = (gcnew System::Windows::Forms::TreeNode(L"Playlist_2", gcnew cli::array< System::Windows::Forms::TreeNode^  >(2) {
				treeNode4,
					treeNode5
			}));
			System::Windows::Forms::TreeNode^  treeNode7 = (gcnew System::Windows::Forms::TreeNode(L"Playlists", gcnew cli::array< System::Windows::Forms::TreeNode^  >(2) {
				treeNode3,
					treeNode6
			}));
			System::Windows::Forms::TreeNode^  treeNode8 = (gcnew System::Windows::Forms::TreeNode(L"Music_1"));
			System::Windows::Forms::TreeNode^  treeNode9 = (gcnew System::Windows::Forms::TreeNode(L"Music_2"));
			System::Windows::Forms::TreeNode^  treeNode10 = (gcnew System::Windows::Forms::TreeNode(L"Album_1", gcnew cli::array< System::Windows::Forms::TreeNode^  >(2) {
				treeNode8,
					treeNode9
			}));
			System::Windows::Forms::TreeNode^  treeNode11 = (gcnew System::Windows::Forms::TreeNode(L"Music_1"));
			System::Windows::Forms::TreeNode^  treeNode12 = (gcnew System::Windows::Forms::TreeNode(L"Music_2"));
			System::Windows::Forms::TreeNode^  treeNode13 = (gcnew System::Windows::Forms::TreeNode(L"Album_2", gcnew cli::array< System::Windows::Forms::TreeNode^  >(2) {
				treeNode11,
					treeNode12
			}));
			System::Windows::Forms::TreeNode^  treeNode14 = (gcnew System::Windows::Forms::TreeNode(L"Albuns", gcnew cli::array< System::Windows::Forms::TreeNode^  >(2) {
				treeNode10,
					treeNode13
			}));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->menuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sairToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->albumToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->criarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->apagarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->procurarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->adicionarMúsicaToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->playlistToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->criarToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->apagarToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->procurarToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->adicionarMúsicaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->musicaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->apagarToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->procurarToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ajudaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ajudaToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->splitContainer2 = (gcnew System::Windows::Forms::SplitContainer());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->splitContainer3 = (gcnew System::Windows::Forms::SplitContainer());
			this->Bfirst_track = (gcnew System::Windows::Forms::Button());
			this->Bplay = (gcnew System::Windows::Forms::Button());
			this->Bpause = (gcnew System::Windows::Forms::Button());
			this->Bmute = (gcnew System::Windows::Forms::Button());
			this->Bstop = (gcnew System::Windows::Forms::Button());
			this->Bshuffle = (gcnew System::Windows::Forms::Button());
			this->Blast_track = (gcnew System::Windows::Forms::Button());
			this->Breplay = (gcnew System::Windows::Forms::Button());
			this->splitContainer4 = (gcnew System::Windows::Forms::SplitContainer());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->splitContainer5 = (gcnew System::Windows::Forms::SplitContainer());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->splitContainer6 = (gcnew System::Windows::Forms::SplitContainer());
			this->treeView1 = (gcnew System::Windows::Forms::TreeView());
			this->treeView2 = (gcnew System::Windows::Forms::TreeView());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->BeginInit();
			this->splitContainer2->Panel1->SuspendLayout();
			this->splitContainer2->Panel2->SuspendLayout();
			this->splitContainer2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer3))->BeginInit();
			this->splitContainer3->Panel1->SuspendLayout();
			this->splitContainer3->Panel2->SuspendLayout();
			this->splitContainer3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer4))->BeginInit();
			this->splitContainer4->Panel1->SuspendLayout();
			this->splitContainer4->Panel2->SuspendLayout();
			this->splitContainer4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer5))->BeginInit();
			this->splitContainer5->Panel1->SuspendLayout();
			this->splitContainer5->Panel2->SuspendLayout();
			this->splitContainer5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer6))->BeginInit();
			this->splitContainer6->Panel1->SuspendLayout();
			this->splitContainer6->Panel2->SuspendLayout();
			this->splitContainer6->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->menuToolStripMenuItem,
					this->albumToolStripMenuItem, this->playlistToolStripMenuItem, this->musicaToolStripMenuItem, this->ajudaToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(932, 28);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// menuToolStripMenuItem
			// 
			this->menuToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->sairToolStripMenuItem });
			this->menuToolStripMenuItem->Name = L"menuToolStripMenuItem";
			this->menuToolStripMenuItem->Size = System::Drawing::Size(58, 24);
			this->menuToolStripMenuItem->Text = L"Menu";
			// 
			// sairToolStripMenuItem
			// 
			this->sairToolStripMenuItem->Name = L"sairToolStripMenuItem";
			this->sairToolStripMenuItem->Size = System::Drawing::Size(109, 26);
			this->sairToolStripMenuItem->Text = L"Sair";
			this->sairToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::sairToolStripMenuItem_Click);
			// 
			// albumToolStripMenuItem
			// 
			this->albumToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->criarToolStripMenuItem,
					this->apagarToolStripMenuItem, this->procurarToolStripMenuItem, this->adicionarMúsicaToolStripMenuItem1
			});
			this->albumToolStripMenuItem->Name = L"albumToolStripMenuItem";
			this->albumToolStripMenuItem->Size = System::Drawing::Size(65, 24);
			this->albumToolStripMenuItem->Text = L"Album";
			// 
			// criarToolStripMenuItem
			// 
			this->criarToolStripMenuItem->Name = L"criarToolStripMenuItem";
			this->criarToolStripMenuItem->Size = System::Drawing::Size(198, 26);
			this->criarToolStripMenuItem->Text = L"Criar";
			this->criarToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::criarToolStripMenuItem_Click);
			// 
			// apagarToolStripMenuItem
			// 
			this->apagarToolStripMenuItem->Name = L"apagarToolStripMenuItem";
			this->apagarToolStripMenuItem->Size = System::Drawing::Size(198, 26);
			this->apagarToolStripMenuItem->Text = L"Apagar";
			this->apagarToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::apagarToolStripMenuItem_Click);
			// 
			// procurarToolStripMenuItem
			// 
			this->procurarToolStripMenuItem->Name = L"procurarToolStripMenuItem";
			this->procurarToolStripMenuItem->Size = System::Drawing::Size(198, 26);
			this->procurarToolStripMenuItem->Text = L"Procurar";
			// 
			// adicionarMúsicaToolStripMenuItem1
			// 
			this->adicionarMúsicaToolStripMenuItem1->Name = L"adicionarMúsicaToolStripMenuItem1";
			this->adicionarMúsicaToolStripMenuItem1->Size = System::Drawing::Size(198, 26);
			this->adicionarMúsicaToolStripMenuItem1->Text = L"Adicionar Música";
			// 
			// playlistToolStripMenuItem
			// 
			this->playlistToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->criarToolStripMenuItem1,
					this->apagarToolStripMenuItem1, this->procurarToolStripMenuItem1, this->adicionarMúsicaToolStripMenuItem
			});
			this->playlistToolStripMenuItem->Name = L"playlistToolStripMenuItem";
			this->playlistToolStripMenuItem->Size = System::Drawing::Size(67, 24);
			this->playlistToolStripMenuItem->Text = L"Playlist";
			// 
			// criarToolStripMenuItem1
			// 
			this->criarToolStripMenuItem1->Name = L"criarToolStripMenuItem1";
			this->criarToolStripMenuItem1->Size = System::Drawing::Size(198, 26);
			this->criarToolStripMenuItem1->Text = L"Criar";
			this->criarToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::criarToolStripMenuItem1_Click);
			// 
			// apagarToolStripMenuItem1
			// 
			this->apagarToolStripMenuItem1->Name = L"apagarToolStripMenuItem1";
			this->apagarToolStripMenuItem1->Size = System::Drawing::Size(198, 26);
			this->apagarToolStripMenuItem1->Text = L"Apagar";
			this->apagarToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::apagarToolStripMenuItem1_Click);
			// 
			// procurarToolStripMenuItem1
			// 
			this->procurarToolStripMenuItem1->Name = L"procurarToolStripMenuItem1";
			this->procurarToolStripMenuItem1->Size = System::Drawing::Size(198, 26);
			this->procurarToolStripMenuItem1->Text = L"Procurar";
			// 
			// adicionarMúsicaToolStripMenuItem
			// 
			this->adicionarMúsicaToolStripMenuItem->Name = L"adicionarMúsicaToolStripMenuItem";
			this->adicionarMúsicaToolStripMenuItem->Size = System::Drawing::Size(198, 26);
			this->adicionarMúsicaToolStripMenuItem->Text = L"Adicionar Música";
			// 
			// musicaToolStripMenuItem
			// 
			this->musicaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->apagarToolStripMenuItem2,
					this->procurarToolStripMenuItem2
			});
			this->musicaToolStripMenuItem->Name = L"musicaToolStripMenuItem";
			this->musicaToolStripMenuItem->Size = System::Drawing::Size(67, 24);
			this->musicaToolStripMenuItem->Text = L"Musica";
			// 
			// apagarToolStripMenuItem2
			// 
			this->apagarToolStripMenuItem2->Name = L"apagarToolStripMenuItem2";
			this->apagarToolStripMenuItem2->Size = System::Drawing::Size(139, 26);
			this->apagarToolStripMenuItem2->Text = L"Apagar";
			// 
			// procurarToolStripMenuItem2
			// 
			this->procurarToolStripMenuItem2->Name = L"procurarToolStripMenuItem2";
			this->procurarToolStripMenuItem2->Size = System::Drawing::Size(139, 26);
			this->procurarToolStripMenuItem2->Text = L"Procurar";
			// 
			// ajudaToolStripMenuItem
			// 
			this->ajudaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->ajudaToolStripMenuItem1 });
			this->ajudaToolStripMenuItem->Name = L"ajudaToolStripMenuItem";
			this->ajudaToolStripMenuItem->Size = System::Drawing::Size(60, 24);
			this->ajudaToolStripMenuItem->Text = L"Ajuda";
			// 
			// ajudaToolStripMenuItem1
			// 
			this->ajudaToolStripMenuItem1->Name = L"ajudaToolStripMenuItem1";
			this->ajudaToolStripMenuItem1->Size = System::Drawing::Size(123, 26);
			this->ajudaToolStripMenuItem1->Text = L"Ajuda";
			// 
			// splitContainer1
			// 
			this->splitContainer1->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 28);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->splitContainer2);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->splitContainer5);
			this->splitContainer1->Size = System::Drawing::Size(932, 555);
			this->splitContainer1->SplitterDistance = 301;
			this->splitContainer1->TabIndex = 3;
			// 
			// splitContainer2
			// 
			this->splitContainer2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer2->Location = System::Drawing::Point(0, 0);
			this->splitContainer2->Name = L"splitContainer2";
			this->splitContainer2->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer2.Panel1
			// 
			this->splitContainer2->Panel1->Controls->Add(this->pictureBox1);
			// 
			// splitContainer2.Panel2
			// 
			this->splitContainer2->Panel2->Controls->Add(this->splitContainer3);
			this->splitContainer2->Size = System::Drawing::Size(301, 555);
			this->splitContainer2->SplitterDistance = 211;
			this->splitContainer2->TabIndex = 0;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(301, 211);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// splitContainer3
			// 
			this->splitContainer3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer3->Location = System::Drawing::Point(0, 0);
			this->splitContainer3->Name = L"splitContainer3";
			this->splitContainer3->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer3.Panel1
			// 
			this->splitContainer3->Panel1->Controls->Add(this->Bfirst_track);
			this->splitContainer3->Panel1->Controls->Add(this->Bplay);
			this->splitContainer3->Panel1->Controls->Add(this->Bpause);
			this->splitContainer3->Panel1->Controls->Add(this->Bmute);
			this->splitContainer3->Panel1->Controls->Add(this->Bstop);
			this->splitContainer3->Panel1->Controls->Add(this->Bshuffle);
			this->splitContainer3->Panel1->Controls->Add(this->Blast_track);
			this->splitContainer3->Panel1->Controls->Add(this->Breplay);
			// 
			// splitContainer3.Panel2
			// 
			this->splitContainer3->Panel2->Controls->Add(this->splitContainer4);
			this->splitContainer3->Size = System::Drawing::Size(301, 340);
			this->splitContainer3->SplitterDistance = 83;
			this->splitContainer3->TabIndex = 0;
			// 
			// Bfirst_track
			// 
			this->Bfirst_track->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Bfirst_track.BackgroundImage")));
			this->Bfirst_track->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Bfirst_track->Location = System::Drawing::Point(14, 3);
			this->Bfirst_track->Name = L"Bfirst_track";
			this->Bfirst_track->Size = System::Drawing::Size(51, 41);
			this->Bfirst_track->TabIndex = 20;
			this->Bfirst_track->Text = L"\r\n";
			this->Bfirst_track->UseVisualStyleBackColor = true;
			// 
			// Bplay
			// 
			this->Bplay->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Bplay.BackgroundImage")));
			this->Bplay->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Bplay->Location = System::Drawing::Point(128, 3);
			this->Bplay->Name = L"Bplay";
			this->Bplay->Size = System::Drawing::Size(51, 41);
			this->Bplay->TabIndex = 15;
			this->Bplay->Text = L"\r\n";
			this->Bplay->UseVisualStyleBackColor = true;
			// 
			// Bpause
			// 
			this->Bpause->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Bpause.BackgroundImage")));
			this->Bpause->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Bpause->Location = System::Drawing::Point(71, 3);
			this->Bpause->Name = L"Bpause";
			this->Bpause->Size = System::Drawing::Size(51, 41);
			this->Bpause->TabIndex = 16;
			this->Bpause->Text = L"\r\n";
			this->Bpause->UseVisualStyleBackColor = true;
			// 
			// Bmute
			// 
			this->Bmute->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Bmute.BackgroundImage")));
			this->Bmute->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Bmute->Location = System::Drawing::Point(128, 50);
			this->Bmute->Name = L"Bmute";
			this->Bmute->Size = System::Drawing::Size(51, 41);
			this->Bmute->TabIndex = 19;
			this->Bmute->Text = L"\r\n";
			this->Bmute->UseVisualStyleBackColor = true;
			// 
			// Bstop
			// 
			this->Bstop->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Bstop.BackgroundImage")));
			this->Bstop->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Bstop->Location = System::Drawing::Point(182, 3);
			this->Bstop->Name = L"Bstop";
			this->Bstop->Size = System::Drawing::Size(51, 41);
			this->Bstop->TabIndex = 14;
			this->Bstop->Text = L"\r\n";
			this->Bstop->UseVisualStyleBackColor = true;
			// 
			// Bshuffle
			// 
			this->Bshuffle->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Bshuffle.BackgroundImage")));
			this->Bshuffle->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Bshuffle->Location = System::Drawing::Point(182, 50);
			this->Bshuffle->Name = L"Bshuffle";
			this->Bshuffle->Size = System::Drawing::Size(51, 41);
			this->Bshuffle->TabIndex = 17;
			this->Bshuffle->Text = L"\r\n";
			this->Bshuffle->UseVisualStyleBackColor = true;
			// 
			// Blast_track
			// 
			this->Blast_track->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Blast_track.BackgroundImage")));
			this->Blast_track->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Blast_track->Location = System::Drawing::Point(239, 3);
			this->Blast_track->Name = L"Blast_track";
			this->Blast_track->Size = System::Drawing::Size(51, 41);
			this->Blast_track->TabIndex = 13;
			this->Blast_track->Text = L"\r\n";
			this->Blast_track->UseVisualStyleBackColor = true;
			// 
			// Breplay
			// 
			this->Breplay->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Breplay.BackgroundImage")));
			this->Breplay->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Breplay->Location = System::Drawing::Point(71, 50);
			this->Breplay->Name = L"Breplay";
			this->Breplay->Size = System::Drawing::Size(51, 41);
			this->Breplay->TabIndex = 18;
			this->Breplay->Text = L"\r\n";
			this->Breplay->UseVisualStyleBackColor = true;
			// 
			// splitContainer4
			// 
			this->splitContainer4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer4->Location = System::Drawing::Point(0, 0);
			this->splitContainer4->Name = L"splitContainer4";
			this->splitContainer4->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer4.Panel1
			// 
			this->splitContainer4->Panel1->Controls->Add(this->progressBar1);
			this->splitContainer4->Panel1->Controls->Add(this->label4);
			// 
			// splitContainer4.Panel2
			// 
			this->splitContainer4->Panel2->Controls->Add(this->trackBar1);
			this->splitContainer4->Panel2->Controls->Add(this->label5);
			this->splitContainer4->Size = System::Drawing::Size(301, 253);
			this->splitContainer4->SplitterDistance = 53;
			this->splitContainer4->TabIndex = 0;
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(12, 26);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(267, 23);
			this->progressBar1->TabIndex = 15;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(10, 6);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(73, 17);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Progresso";
			// 
			// trackBar1
			// 
			this->trackBar1->Location = System::Drawing::Point(13, 24);
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(266, 56);
			this->trackBar1->TabIndex = 17;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(11, 4);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(55, 17);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Volume";
			// 
			// splitContainer5
			// 
			this->splitContainer5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer5->Location = System::Drawing::Point(0, 0);
			this->splitContainer5->Name = L"splitContainer5";
			this->splitContainer5->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer5.Panel1
			// 
			this->splitContainer5->Panel1->Controls->Add(this->textBox3);
			this->splitContainer5->Panel1->Controls->Add(this->textBox2);
			this->splitContainer5->Panel1->Controls->Add(this->textBox1);
			this->splitContainer5->Panel1->Controls->Add(this->label3);
			this->splitContainer5->Panel1->Controls->Add(this->label2);
			this->splitContainer5->Panel1->Controls->Add(this->label1);
			// 
			// splitContainer5.Panel2
			// 
			this->splitContainer5->Panel2->Controls->Add(this->splitContainer6);
			this->splitContainer5->Size = System::Drawing::Size(627, 555);
			this->splitContainer5->SplitterDistance = 132;
			this->splitContainer5->TabIndex = 0;
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Location = System::Drawing::Point(72, 72);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(532, 22);
			this->textBox3->TabIndex = 13;
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(72, 44);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(532, 22);
			this->textBox2->TabIndex = 14;
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(72, 16);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(532, 22);
			this->textBox1->TabIndex = 15;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(14, 77);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(52, 17);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Playlist";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(14, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 17);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Álbum";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(14, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(52, 17);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Música";
			// 
			// splitContainer6
			// 
			this->splitContainer6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer6->Location = System::Drawing::Point(0, 0);
			this->splitContainer6->Name = L"splitContainer6";
			// 
			// splitContainer6.Panel1
			// 
			this->splitContainer6->Panel1->Controls->Add(this->treeView1);
			// 
			// splitContainer6.Panel2
			// 
			this->splitContainer6->Panel2->Controls->Add(this->treeView2);
			this->splitContainer6->Size = System::Drawing::Size(627, 419);
			this->splitContainer6->SplitterDistance = 209;
			this->splitContainer6->TabIndex = 0;
			// 
			// treeView1
			// 
			this->treeView1->CheckBoxes = true;
			this->treeView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->treeView1->Location = System::Drawing::Point(0, 0);
			this->treeView1->Name = L"treeView1";
			treeNode1->Name = L"Node2";
			treeNode1->Text = L"Music_1";
			treeNode2->Name = L"Node3";
			treeNode2->Text = L"Music_2";
			treeNode3->Name = L"Node1";
			treeNode3->Text = L"Playlist_1";
			treeNode4->Name = L"Node5";
			treeNode4->Text = L"Music_1";
			treeNode5->Name = L"Node6";
			treeNode5->Text = L"Music_2";
			treeNode6->Name = L"Node4";
			treeNode6->Text = L"Playlist_2";
			treeNode7->Checked = true;
			treeNode7->Name = L"Node0";
			treeNode7->Text = L"Playlists";
			this->treeView1->Nodes->AddRange(gcnew cli::array< System::Windows::Forms::TreeNode^  >(1) { treeNode7 });
			this->treeView1->Size = System::Drawing::Size(209, 419);
			this->treeView1->TabIndex = 1;
			// 
			// treeView2
			// 
			this->treeView2->CheckBoxes = true;
			this->treeView2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->treeView2->Location = System::Drawing::Point(0, 0);
			this->treeView2->Name = L"treeView2";
			treeNode8->Name = L"Node2";
			treeNode8->Text = L"Music_1";
			treeNode9->Name = L"Node3";
			treeNode9->Text = L"Music_2";
			treeNode10->Name = L"Node1";
			treeNode10->Text = L"Album_1";
			treeNode11->Name = L"Node5";
			treeNode11->Text = L"Music_1";
			treeNode12->Name = L"Node6";
			treeNode12->Text = L"Music_2";
			treeNode13->Name = L"Node4";
			treeNode13->Text = L"Album_2";
			treeNode14->Checked = true;
			treeNode14->Name = L"Node0";
			treeNode14->Text = L"Albuns";
			this->treeView2->Nodes->AddRange(gcnew cli::array< System::Windows::Forms::TreeNode^  >(1) { treeNode14 });
			this->treeView2->Size = System::Drawing::Size(414, 419);
			this->treeView2->TabIndex = 1;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(932, 583);
			this->Controls->Add(this->splitContainer1);
			this->Controls->Add(this->menuStrip1);
			this->Name = L"MyForm";
			this->Text = L"MP3 Organizer";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->splitContainer2->Panel1->ResumeLayout(false);
			this->splitContainer2->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->EndInit();
			this->splitContainer2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->splitContainer3->Panel1->ResumeLayout(false);
			this->splitContainer3->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer3))->EndInit();
			this->splitContainer3->ResumeLayout(false);
			this->splitContainer4->Panel1->ResumeLayout(false);
			this->splitContainer4->Panel1->PerformLayout();
			this->splitContainer4->Panel2->ResumeLayout(false);
			this->splitContainer4->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer4))->EndInit();
			this->splitContainer4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			this->splitContainer5->Panel1->ResumeLayout(false);
			this->splitContainer5->Panel1->PerformLayout();
			this->splitContainer5->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer5))->EndInit();
			this->splitContainer5->ResumeLayout(false);
			this->splitContainer6->Panel1->ResumeLayout(false);
			this->splitContainer6->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer6))->EndInit();
			this->splitContainer6->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void sairToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 Application::Exit();
	}
private: System::Void criarToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 // Cria um windows form chamado Delete
			 Create_Album^ Criar = gcnew Create_Album();
			 // Depois de gerenciar a configuraçao do ponteiro, usa o operador de redirecionamento 
			 // para chamar o método show para mostrar a forma criada.
			 Criar->Show();

}
private: System::Void apagarToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 // Cria um windows form chamado Delete
			 Delete^ Apagar = gcnew Delete();
			 // Depois de gerenciar a configuraçao do ponteiro, usa o operador de redirecionamento 
			 // para chamar o método show para mostrar a forma criada.
			 Apagar->Show();

}
private: System::Void apagarToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
			 // Cria um windows form chamado Delete
			 Delete^ Apagar = gcnew Delete();
			 // Depois de gerenciar a configuraçao do ponteiro, usa o operador de redirecionamento 
			 // para chamar o método show para mostrar a forma criada.
			 Apagar->Show();

}
private: System::Void criarToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
			

}
};
}
