#include "button_panel.h"

ButtonPanel::ButtonPanel(QWidget *parent)
    : AbstractView(parent),
      scanButton(new QPushButton("Scan", this)),
      pingButton(new QPushButton("Ping", this)),
      exportCsvButton(new QPushButton("Export CSV", this)),
      exportJsonButton(new QPushButton("Export JSON", this)),
      buttonsLayout(new QVBoxLayout(this))
{
    setupUI();
}

void ButtonPanel::setupUI() {
    buttonsLayout->addWidget(scanButton);
    buttonsLayout->addWidget(pingButton);
    buttonsLayout->addWidget(exportCsvButton);
    buttonsLayout->addWidget(exportJsonButton);
    buttonsLayout->addStretch();
    setLayout(buttonsLayout);
}