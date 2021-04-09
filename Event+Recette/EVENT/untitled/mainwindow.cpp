#include <QDebug>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>
#include <QSqlQuery>
#include "evenement.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent),
                                          ui(new Ui::MainWindow)
{
    ui->setupUi(this);
  evenement e;
   //ui->tableView->setModel(e.afficher());
 plot();
}


void MainWindow::plot()

{
   stat();
}



MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()//Ajouter
{
    evenement t;

        t.setNOM_EVENEMENT(ui->lineEdit->text());
        t.setTYPE(ui->lineEdit_2->text());
        t.setBUDGET(ui->lineEdit_3->text().toFloat());
        t.setLIEU(ui->lineEdit_4->text());

        t.setNOMBRE_INVITE(ui->lineEdit_5->text().toInt());

        qDebug()<<ui->lineEdit_5->text();
        t.ajouter();
    ui->tableView->setModel(t.afficher());
}


void MainWindow::on_pushButton_2_clicked()
{evenement t;
    ui->tableView->setModel(t.afficher());
}




void MainWindow::on_tableView_activated(const QModelIndex &index)
{QString val=ui->tableView->model()->data(index).toString();
    QSqlQuery qry;
    qry.prepare("select * from evenement where id_evenement='"+val+"' " );
    if(qry.exec())
      {while (qry.next())
     { ui->lineEdit_7->setText(qry.value(1).toString());
       ui->lineEdit_9->setText(qry.value(2).toString());
       ui->lineEdit_8->setText(qry.value(3).toString());
       ui->lineEdit_10->setText(qry.value(4).toString());
       ui->lineEdit_6->setText(qry.value(5).toString());
       ui->lineEdit_11->setText(qry.value(0).toString());


     }
  }
}

void MainWindow::on_suppevent_clicked()
{
    evenement e;

    e.setID_EVENEMENT(ui->lineEdit_11->text().toInt());

          bool test=e.supprimer(e.getID_EVENEMENT());
         if (test)
         {

          QMessageBox::information(nullptr,QObject::tr("Supprimer event"),
                                   QObject::tr("event supprimé.\n"
                                               "Click ok to exit."), QMessageBox::Cancel);

        ui->tableView->setModel(e.afficher());

         }
}

void MainWindow::on_modifevent_clicked()
{
        int idevenement=ui->lineEdit_11->text().toInt();
            QString nomevent=ui->lineEdit_7->text();
            QString type=ui->lineEdit_9->text();
           float budget=ui->lineEdit_8->text().toFloat();
            QString lieu=ui->lineEdit_10->text();
            int nombreinv=ui->lineEdit_6->text().toInt();

            evenement e(idevenement,nomevent,type,budget,lieu,nombreinv);
            bool test=e.modifier();
            if (test)
            {
                 ui->tableView->setModel(e.afficher());
            QMessageBox::information(nullptr,QObject::tr("Modification evenement"),
                                     QObject::tr("evenement modifié.\n"
                                                 "Click Cancel to exit."), QMessageBox::Cancel);

}
}

void MainWindow::on_pb_tri_nb_clicked()
{
    evenement p;

     QTableView* table=ui->tableView;

    p.trie(table);
}

void MainWindow::on_TRI_budgt_clicked()
{
    evenement p;

     QTableView* table=ui->tableView;

    p.trie2(table);
}

void MainWindow::on_tri_nom_clicked()
{
    evenement p;

     QTableView* table=ui->tableView;

    p.trie3(table);
}
void MainWindow::on_chercherfour_clicked()
{ evenement t;
    QString nom = ui->cher1->text();
       ui->tableView->setModel(t.cherch_four(nom));
}

void MainWindow::on_PDF_clicked()
{
    QString str;
               str.append("<!DOCTYPE html><html lang='en'><head><style>#ipi-table > thead > tr, #ipi-table > thead > tr > td {font-size: .9em;font-weight: 400;background: #51596a;text-transform: uppercase;color: #ffffff;}#ipi-table > tbody > tr > td {max-height: 200px;vertical-align: middle!important;}</style></head><body><div class='container'><div class='row'><div class='col-md-12'><p>&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;  &nbsp; &nbsp; &nbsp; TABLEAU GESTION EVENEMENTS  &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;</p></div></div></div><div class='container'><div class='card' id='TableSorterCard'><div class='row'><div class='col-12'><div><table class='table table tablesorter' id='ipi-table'><thead class='thead-dark'><tr><th>ID_EVENEMENT &nbsp; &nbsp;</th><th class='filter-false'>NOM_EVENEMENT &nbsp; &nbsp;</th><th class='filter-false sorter-false'>TYPE &nbsp; &nbsp;</th><th class='filter-false sorter-false'>BUDGET &nbsp; &nbsp;</th><th class='filter-false sorter-false'>LIEU &nbsp; &nbsp;</th><th class='filter-false sorter-false'>NOMBRE INVITES &nbsp; &nbsp;</th></tr></thead><tbody>");




               QSqlQuery* query=new QSqlQuery();
               query->exec("SELECT * FROM EVENEMENT");

               while(query->next())
               {
               str.append("<tr><td>");
               str.append(query->value(0).toString()) ;
               str.append("</td><td>") ;
               str.append(query->value(1).toString());
               str.append("</td><td>") ;
               str.append(query->value(2).toString());
               str.append("</td><td>") ;
               str.append(query->value(3).toString());
               str.append("</td><td>") ;
               str.append(query->value(4).toString());
               str.append("</td><td>") ;
               str.append(query->value(5).toString());
               str.append("</td></td>");



               }
            str.append("</tbody></table></div></div></div></div></body></html>") ;

            QPrinter printer ;
            printer.setOrientation(QPrinter::Portrait);
            printer.setOutputFormat(QPrinter::PdfFormat);
            printer.setPaperSize(QPrinter::A4) ;

            QString path=QFileDialog::getSaveFileName(NULL,"Convertir a PDF","..","PDF(*.pdf)");

            if (path.isEmpty()) return ;
            printer.setOutputFileName(path) ;

            QTextDocument doc;
            doc.setHtml(str) ;
            doc.print(&printer);
}

void MainWindow::on_cher1_cursorPositionChanged(int arg1, int arg2)
{

}

void MainWindow::on_pushButton_3_clicked()
{
 ui->tabWidget->setCurrentIndex(2);
 QCPStatisticalBox *statistical = new QCPStatisticalBox(ui->customPlot->xAxis, ui->customPlot->yAxis);
 QBrush boxBrush(QColor(60, 60, 255, 100));
 boxBrush.setStyle(Qt::Dense6Pattern); // make it look oldschool
 statistical->setBrush(boxBrush);
int i=1;
QSqlQuery query;
query.prepare("select NOMBRE_INVITE from EVENEMENT order by ID_EVENEMENT ");
if (query.exec() ){
while(query.next() ){
   statistical->addData(i, query.value(0).toInt(), query.value(0).toInt(), query.value(0).toInt(), 450, 450);
   i++;
    }
}
 // specify data:

/*  statistical->addData(1, 1.1, 1.9, 2.25, 2.7, 4.2);
 statistical->addData(2, 0.8, 1.6, 2.2, 3.2, 4.9, QVector<double>() << 0.7 << 0.34 << 0.45 << 6.2 << 5.84); // provide some outliers as QVector
 statistical->addData(3, 0.2, 0.7, 1.1, 1.6, 2.9);*/

 // prepare manual x axis labels:
 ui->customPlot->xAxis->setSubTicks(false);
 ui->customPlot->xAxis->setTickLength(0, 4);
 ui->customPlot->xAxis->setTickLabelRotation(20);
 QSharedPointer<QCPAxisTickerText> textTicker(new QCPAxisTickerText);
 i=1;
 QSqlQuery query1;
 query1.prepare("select NOM_EVENEMENT from EVENEMENT order by ID_EVENEMENT ");
 if (query1.exec() ){
 while(query1.next() ){
    textTicker->addTick(i, query1.value(0).toString());
     i++;
      }
 }



 ui->customPlot->xAxis->setTicker(textTicker);

 // prepare axes:
 ui->customPlot->yAxis->setLabel(QString::fromUtf8("nombre de places restant "));
 ui->customPlot->rescaleAxes();
 ui->customPlot->xAxis->scaleRange(1.7, ui->customPlot->xAxis->range().center());
 ui->customPlot->yAxis->setRange(0, 500);
 ui->customPlot->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom);

}

void MainWindow::stat()
{

}
