#pragma once

#include "Uhrtype.hpp"

/*
 *           Layout Front
 *                COL
 *       X 9 8 7 6 5 4 3 2 1 0
 * ROW + - - - - - - - - - - -
 *  0  | @ I _ Ä S _ I S C H _
 *  1  | F Ü F _ _ V I E R T U 
 *  2  | Z Ä Ä _ Z W Ä N Z G _
 *  3  | V O R A B _ H A U B I
 *  4  | E I S Z W Ö I _ D R Ü
 *  5  | V I E R I _ F Ü F I _
 *  6  | S Ä C H S I S I B N I
 *  7  | A C H T I _ N Ü N I _
 *  8  | Z Ä N I _ _ _ E U F I
 *  9  | _ _ Z W Ö U F I _ _ _
 */

class Ch10x11_t : public iUhrType {
public:
    virtual LanguageAbbreviation usedLang() override {
        return LanguageAbbreviation::DE;
    };

    //------------------------------------------------------------------------------

    virtual const bool hasZwanzig() override { return true; }

    //------------------------------------------------------------------------------

    void show(FrontWord word) override {
        switch (word) {

        case FrontWord::es_ist:
            setFrontMatrixWord(0, 9, 10);
            setFrontMatrixWord(0, 4, 7);
            break;

        case FrontWord::nach:
        case FrontWord::v_nach:
            setFrontMatrixWord(3, 9, 10);
            break;

        case FrontWord::vor:
        case FrontWord::v_vor:
            setFrontMatrixWord(2, 0, 2);
            break;

        case FrontWord::viertel:
            setFrontMatrixWord(1, 5, 10);
            break;

        case FrontWord::min_5:
            setFrontMatrixWord(0, 0, 2);
            break;

        case FrontWord::min_10:
            setFrontMatrixWord(1, 0, 2);
            break;

        case FrontWord::min_20:
            setFrontMatrixWord(2, 5, 10);
            break;

        case FrontWord::halb:
            setFrontMatrixWord(3, 3, 7);
            break;

        case FrontWord::eins:
            setFrontMatrixWord(4, 8, 10);
            break;

        case FrontWord::hour_1:
            setFrontMatrixWord(4, 8, 10);
            break;

        case FrontWord::hour_2:
            setFrontMatrixWord(4, 4, 7);
            break;

        case FrontWord::hour_3:
            setFrontMatrixWord(4, 0, 2);
            break;

        case FrontWord::hour_4:
            setFrontMatrixWord(5, 6, 10);
            break;

        case FrontWord::hour_5:
            setFrontMatrixWord(5, 2, 5);
            break;

        case FrontWord::hour_6:
            setFrontMatrixWord(6, 5, 10);
            break;

        case FrontWord::hour_7:
            setFrontMatrixWord(6, 0, 4);
            break;

        case FrontWord::hour_8:
            setFrontMatrixWord(7, 6, 10);
            break;

        case FrontWord::hour_9:
            setFrontMatrixWord(7, 2, 5);
            break;

        case FrontWord::hour_10:
            setFrontMatrixWord(8, 7, 10);
            break;

        case FrontWord::hour_11:
            setFrontMatrixWord(8, 0, 3);
            break;

        case FrontWord::hour_12:
            setFrontMatrixWord(9, 5, 10);
            break;

        default:
            break;
        };
    };
};

Ch10x11_t _ch10x11;