#ifndef BITRAAMADDRESSVALIDATOR_H
#define BITRAAMADDRESSVALIDATOR_H

#include <QValidator>

/** Base48 entry widget validator.
   Corrects near-miss characters and refuses characters that are no part of base48.
 */
class BitraamAddressValidator : public QValidator
{
    Q_OBJECT

public:
    explicit BitraamAddressValidator(QObject *parent = 0);

    State validate(QString &input, int &pos) const;

    static const int MaxAddressLength = 35;
};

#endif // BITRAAMADDRESSVALIDATOR_H
