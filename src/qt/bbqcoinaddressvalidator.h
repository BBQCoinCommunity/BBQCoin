// Copyright (c) 2011-2013 The BBQCoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BBQCOINADDRESSVALIDATOR_H
#define BBQCOINADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator.
   Corrects near-miss characters and refuses characters that are not part of base58.
 */
class BBQCoinAddressValidator : public QValidator
{
    Q_OBJECT

public:
    explicit BBQCoinAddressValidator(QObject *parent = 0);

    State validate(QString &input, int &pos) const;

    static const int MaxAddressLength = 35;
};

#endif // BBQCOINADDRESSVALIDATOR_H
