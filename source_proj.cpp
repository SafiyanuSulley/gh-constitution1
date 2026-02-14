#include "include_project/TerminalGuard.hpp"
#include "include_project/header_proj.hpp"
#include<iostream>
#include<string>
#include<limits>

using namespace std;
namespace Art_1
{
   uint_least16_t i = 0, ii = 0, iii = 0, iv = 0,
   v = 0, vi = 0, vii = 0, viii = 0;
   string text = "", t = "", s = "";
    
    void Clause_1(string text) // section for paragraph ?
    {
        cout<< "                          SUPREMACY OF THE CONSTITUTION\n\n";
        text += "(1) The Sovereignity of Ghana resides in the people of Ghana in whose name and\n"; 
        text += "    for whose welfare the powers of government are to be exercised in the manner\n";
        text += "    and within the limits laid down in this Constitution.\n";
          t = move(text); cout<< t << endl;
    }
    void Clause_2(string text)
    {
        text += "(2) This Constitution shall be the supreme law of Ghana and any other law\n";
        text += "    found to be inconsistent with any provision of this Constitution shall,\n"; 
        text += "    to the extent of the inconsistency, be void.\n";
          t = move(text); cout<< t << endl;
    }
}

namespace Art_2
{
    uint_least16_t i = 0, ii = 0, iii = 0, iv = 0,
    v = 0, vi = 0, vii = 0, viii = 0;
    string text = "", t = "", s = "";

    void Clause_1ab(string text)
    {
      cout<< "                      ENFORCEMENT OF THE CONSTITUTION\n\n";
      text += "(1) A person who alleges that-\n\n";
      text += "(a) an enactment or anything contained in or done, under the authority of\n";
      text += "    that or any other enactment; or\n";
      text += "(b) any act or omission of any person;\n\n"; //  (1a) (1b) non-detailed inconsistency
      text += "    is inconsistent with, or is in contravention of a provision of this Constitution,\n";
      text += "    may bring an action in the Supreme Court for a declaration to that effect.\n";
        t = move(text); cout<< t << endl;
    }
    void Clause_2(string text)
    {
      text += "(2) The Supreme Court shall, for the purposes of a declaration under clause(1)\n";
      text += "    of this article, make such orders and give such directions as it may consider\n";
      text += "    appropriate for giving effect, or enabling effect to be given, to the declaration\n";
      text += "    so made.\n";
        t = move(text); cout<< t << endl;
    }
    void Clause_3(string text)
    {
      text += "(3) Any person or group of persons to whom an order or direction is addressed under\n";
      text += "    clause(2) of this article by the Supreme Court, shall duly obey and carry out\n";
      text += "    the terms of the order or direction.\n";
        t = move(text); cout<< t << endl;
    }
    void Clause_4(string text)
    {
      text += "(4) Failure to obey or carry out the terms of an order or direction made or given\n";
      text += "    under clause(2) of this article constitutes a high crime under this Constitution\n";
      text += "    and shall, in the case of the President or the Vice-President, constitute a ground\n";
      text += "    for removal from office under this Constitution.\n";
        t = move(text); cout<< t << endl;
    }
    void Section_5a(string text) // clause(5) to short to stand
    {
      text += "(5) A person convicted of a high crime under clause(4) of this article shall-\n\n";
      text += "(a) be liable to imprisonment not exceeding ten years without the option of a\n";
      text += "    fine; and...\n";
        t = move(text); cout<< t << endl;
    }
    void Section_5b(string text)
    {
      text += "(5) A person convicted of a high crime under clause(4) of this article shall-\n\n";
      text += "(b) not be eligible for election, or for appointment, to any public office for\n";
      text += "    ten years beginning with the date of the expiration of the term of imprisonment.\n";
        t = move(text); cout<< t << endl;
    }
}

namespace Art_3
{
  uint_least16_t i = 0, ii = 0, iii = 0, iv = 0 ,
  v = 0, vi = 0, vii = 0, viii = 0;
  string text = "", t = "", s = "";
  
    void Clause_1(string text)
    {
      cout<< "                           DEFENCE OF THE CONSTITUTION\n\n";
      text += "(1) Parliament shall have no power to enact a law establishing a one-party state.\n";
        t = move(text); cout<< t << endl;
    }
    
    void Clause_2(string text)
    {
      text += "(2) Any activity of a person or group of persons which suppresses or seeks to\n";
      text += "    suppress the lawful political activity of any other person or any class of\n";
      text += "    persons, or persons generally is unlawful.\n";
        t = move(text); cout<< t << endl;
    }

    void Section_3a(string text)     // clause_3 too short to stand
    {
      text += "(3) Any person who-\n\n";
      text += "(a) by himself or in concert with others by any violent or other unlawful means,\n";
      text += "    suspends or overthrows or abrogates this Constitution or any part of it, or\n"; 
      text += "    attempts to do any such act; or...\n";
        t = move(text); cout<< t << endl;
    }
    void Section_3b(string text)
    {
      text += "(3) Any person who-\n\n";
      text += "(b) aids and abets in any manner any person referred to in section(a) of this\n";
      text += "    clause; commits the offence of high treason and shall, upon conviction, be\n"; 
      text += "    sentenced to suffer death.\n";
        t = move(text); cout<< t << endl;
    }

    void Section_4a(string text)
    {
      text += "(4) All citizens of Ghana shall have the right and duty at all times-\n\n";
      text += "(a) to defend this Constitution, and in particular, to resist any person or\n";
      text += "    group of persons seeking to commit any of the acts referred to in clause(3)\n";
      text += "    of this article; and...\n";
        t = move(text); cout<< t << endl;
    }

    void Section_4b(string text)
    {
      text += "(4) All citizens of Ghana shall have the right and duty at all times-\n\n";
      text += "(b) to do all in their power to restore this Constitution after it has been\n";
      text += "    suspended, overthrown, or abrogated as referred to in clause(3) of this\n";
      text += "    article.\n";
        t = move(text); cout<< t << endl;
    }

    void Clause_5(string text)
    {
      text += "(5) Any person or group of persons who suppresses or resist the suspension, overthrow\n";
      text += "    or abrogation of this Constitution as referred to in clause(3) of this article commits\n";
      text += "    no offence.\n";
        t = move(text); cout<< t << endl;
    }

    void Clause_6(string text)
    {
      text += "(6) Where a person referred to in clause(5) of this article is punished for any act\n";
      text += "    done under that clause, the punishment shall, on the restoration of this Constitution,\n";
      text += "    be taken to be void from the time it was imposed and he shall, from that time, be taken\n";
      text += "    to be absolved from all liabilities arising out of the punishment.\n";
        t = move(text); cout<< t << endl;
    }

    void Clause_7(string text)
    {
      text += "(7) The Supreme Court shall, on application by or on behalf of a person who has suffered\n";
      text += "    any punishment or loss to which clause(6) of this article relates, award him adequate\n";
      text += "    compensation, which shall be charged on the Consolidated Fund, in respect of any\n";
      text += "    suffering or loss incurred as a result of the punishment.\n";
        t = move(text); cout<< t << endl;
    }
}

namespace Art_4
{
  uint_least16_t i = 0, ii = 0, iii = 0, iv = 0,
  v = 0, vi = 0, vii = 0, viii = 0;
  string text = "", t = "", s = "";

  void Clause_1(string text)
  {
    cout<<  "                                  TERRITORIES OF GHANA\n\n";
    text += "(1) The sovereign State of Ghana is a unitary republic consisting of those territories\n";
    text += "    comprised in the regions which, immediately before the coming into force of this\n";
    text += "    Constitution, existed in Ghana, including the territorial sea and the air space.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_2(string text)
  {
    text += "(2) Parliament may by law provide for the delimitation of the territorial sea, the\n"; 
    text += "    contiguous zone, the exclusive economic zone and the continental shelf of Ghana.\n";
      t = move(text); cout<< t << endl;
  }
}

namespace Art_5
{
  uint_least16_t i = 0, ii = 0, iii = 0, iv = 0,
  v = 0, vi = 0, vii = 0, viii = 0;
  string text = "", t = "", s = "";

  void Section_1a(string text)
  {
    cout<<  "             CREATION, ALTERATION AND MERGER OF REGIONS\n\n";
    text += "(1) Subject to the provisions of this article, the President may,\n";
    text += "    by constitutional instrument\n";
    text += "(a) create a new region;\n";
      t = move(text); cout<< t << endl;
  }
  void Section_1b(string text)
  {
    text += "(1) Subject to the provisions of this article, the President may,\n";
    text += "    by constitutional instrument\n";
    text += "(b) alter the boundaries of a region; or...\n";
      t = move(text); cout<< t << endl;
  }
  void Section_1c(string text)
  {
    text += "(1) Subject to the provisions of this article, the President may,\n";
    text += "    by constitutional instrument\n";
    text += "(c) provide for the merger of two or more regions.\n";
      t = move(text); cout<< t << endl;
  }
  void Section_2a(string text)
  {
    text += "(2) If the President, upon a petition being presented to him and, on the advice\n";
    text += "    of the Council of State, is satisfied that there is substantial demand for\n";
    text += "(a) the creation of a new region;\n";
      t = move(text); cout<< t << endl;
  }
  void Section_2b(string text)
  {
    text += "(2) If the president, upon a petition being presented to him and, on the advice\n";
    text += "    of the Council of State, is satisfied that there is substantial demand for\n\n";
    text += "(b) the alteration of the boundaries of a region, whether or\n";  
    text += "    not the alteration involves the creation of a new region; or\n";
      t = move(text); cout<< t << endl;
  }
  void Section_2c(string text)
  {
    text += "(2) If the president, upon a petition being presented to him and, on the advice\n";
    text += "    of the Council of State, is satisfied that there is substantial demand for\n\n";
    text += "(c) the merger of any two or more regions;\n\n"; // because of the following sentence
    text += "    he shall, acting in accordance with the advice of the Council of State, appoint\n";
    text += "    a commission of inquiry to inquire into the demand and to make recommendations on\n"; 
    text += "    all the factors involved in the creation, alteration or merger.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_3(string text)
  {
    text += "(3) If, notwithstanding that a petition has not been presented to him, the President is,\n";
    text += "    on the advice of the Council of State, satisfied that the need has arisen for taking\n";
    text += "    any of the steps referred to in section(a), (b) and (c) of clause(1) of this article,\n";
    text += "    he may, acting in accordance with the advice of the Council of State, appoint a\n"; 
    text += "    commission of inquiry to inquire into the need and to make recommendations on all the\n";
    text += "    factors involved in the creation, alteration or merger.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_4(string text)
  {
    text += "(4) Where a commission of inquiry appointed under clause(2) or (3) of this article finds\n";
    text += "    that there is the need and a substantial demand for the creation, alteration or merger\n"; 
    text += "    referred to in either of those clauses, it shall recommend to the President that a\n"; 
    text += "    referendum be held, specifying the issues to be determined by the referendum and the\n"; 
    text += "    places where the referendum should be held.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_5(string text)
  {
    text += "(5) The President shall refer the recommendations to the Electoral Commission, and\n"; 
    text += "    the referendum shall be held in a manner prescribed by the Electoral Commission.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_6(string text)
  {
    text += "(6) An issue referred for determination by referendum under clauses(4) and (5) shall\n";
    text += "    not be taken to be determined by the referendum unless at least fifty per cent of\n";
    text += "    the persons entitled to vote cast their votes at the referendum, and of the votes\n"; 
    text += "    cast at least eighty per cent were cast in favour of that issue.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_7(string text)
  {
    text += "(7) Where a referendum involves the merger of two or more regions, the issue shall\n";
    text += "    not be taken to be determined unless at least sixty per cent of the persons entitled\n";
    text += "    to vote at the referendum in each such region voted in favour of the merger of the\n";
    text += "    two or more regions; and accordingly, clause(6) of this article shall not apply to\n";
    text += "    the referendum.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_8(string text)
  {
    text += "(8) The President shall, under clause(1) of this article, and acting in accordance with\n"; 
    text += "    the results of the referendum held under clauses(4) and (5) of this article, issue a\n"; 
    text += "    constitutional instrument giving effect, or enabling effect to be given, to the results.\n";
      t = move(text); cout<< t << endl;
  }
}

namespace Art_6
{
  uint_least16_t i = 0, ii = 0, iii = 0, iv = 0,
  v = 0, vi = 0, vii = 0, viii = 0;
  string text = "", t = "", s = "";

  void Clause_1(string text)
  {
    cout<<  "                        CITIZENSHIP OF GHANA\n\n";
    text += "(1) Every person who, on the coming into force of this Constitution,\n"; 
    text += "    is a citizen of Ghana by law shall continue to be a citizen of Ghana.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_2(string text)
  {
    text += "(2) Subject to the provisions of this Constitution, a person born in or outside Ghana\n";
    text += "    after the coming into force of this Constitution, shall become a citizen of Ghana\n"; 
    text += "    at the date of his birth if either of his parents or grandparents is or was a citizen\n";
    text += "    of Ghana.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_3(string text)
  {
    text += "(3) A child of not more than seven years of age found in Ghana whose\n"; 
    text += "    parents are not known shall be presumed to be a citizen of Ghana\n";
    text += "    by birth.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_4(string text)
  {
    text += "(4) A child of not more than sixteen years of age neither of whose parents\n";
    text += "    is a citizen of Ghana who is adopted by a citizen of Ghana shall, by\n";
    text += "    virtue of the adoption, be a citizen of Ghana.\n";
      t = move(text); cout<< t << endl;
  }
}

namespace Art_7
{
  uint_least16_t i = 0, ii = 0, iii = 0, iv = 0,
  v = 0, vi = 0, vii = 0, viii = 0;
  string text = "", t = "", s = "";

  void Clause_1(string text)
  {
    cout<<  "                      PERSONS ENTITLED TO BE REGISTERED AS CITIZENS\n\n";
    text += "(1) A woman married to a man who is a citizen of Ghana or a man married to a woman who is a\n";
    text += "    citizen of Ghana may, upon making an application in the manner prescribed by Parliament,\n";
    text += "    be registered as a citizen of Ghana.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_2(string text)
  {
    text += "(2) Clause(1) of this article applies also to a person who was married to a person who,\n";
    text += "    but for his or her death, would have continued to be a citizen of Ghana under clause(1)\n";
    text += "    of article 6 of this Constitution.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_3(string text)
  {
    text += "(3) Where the marriage of a woman is annulled after she has been registered as a citizen\n";
    text += "    of Ghana under clause(1) of this article, she shall, unless she renounces that citizenship,\n";
    text += "    continue to be a citizen of Ghana.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_4(string text)
  {
    text += "(4) Any child of a marriage of a woman registered as a citizen of Ghana under clause(1) of\n";
    text += "    this article to which clause(3) of this article applies, shall continue to be a citizen\n";
    text += "    of Ghana unless he renounces that citizenship.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_5(string text)
  {
    text += "(5) Where upon an application by a man for registration under clause(1) of this article,\n"; 
    text += "    it appears to the authority responsible for the registration that a marriage has been\n";
    text += "    entered into primarily with a view to obtaining the registration, the authority may\n"; 
    text += "    request the applicant to satisfy him that the marriage was entered into in good faith;\n"; 
    text += "    and the authority may only effect the registration upon being so satisfied.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_6(string text)
  {
    text += "(6) In the case of a man seeking registration, clause(1) of this\n"; 
    text += "    article applies only if the applicant permanently resides in Ghana.\n";
      t = move(text); cout<< t << endl;
  }
}

namespace Art_8
{
  uint_least16_t i = 0 , ii = 0, iii = 0, iv = 0,
  v = 0, vi = 0, vii = 0, viii = 0;
  string text = "", t = "", s = "";
  
  void Clause_1(string text)
  {
    cout<<  "                     DUAL CITIZENSHIP\n\n";
    text += "(1) A citizen of Ghana may hold the citizenship of any\n"; 
    text += "    other country in addition to his citizenship of Ghana.\n";
      t = move(text); cout<< t << endl;
  }
  void Section_2a(string text)
  {
    text += "(2) Without prejudice to article 94 (2a) of the Constitution, no citizen of Ghana shall\n";
    text += "    qualify to be appointed as a member of any office specified in this clause if he holds\n";
    text += "    the citizenship of any other country in addition to his citizenship of Ghana-\n";
    text += "(a) Ambassador or High Commissioner;\n";
      t = move(text); cout<< t << endl;
  }
  void Section_2b(string text)
  {
    text += "(2) Without prejudice to article 94 (2a) of the Constitution, no citizen of Ghana shall\n";
    text += "    qualify to be appointed as a member of any office specified in this clause if he holds\n";
    text += "    the citizenship of any other country in addition to his citizenship of Ghana-\n";
    text += "(b) Secretary to the Cabinet;\n";
      t = move(text); cout<< t << endl;
  }
  void Section_2c(string text)
  {
    text += "(2) Without prejudice to article 94 (2a) of the Constitution, no citizen of Ghana shall\n";
    text += "    qualify to be appointed as a member of any office specified in this clause if he holds\n";
    text += "    the citizenship of any other country in addition to his citizenship of Ghana-\n";
    text += "(c) Chief of Defence Staff or any Service Chief;\n";
      t = move(text); cout<< t << endl;
  }
  void Section_2d(string text)
  {
    text += "(2) Without prejudice to article 94 (2a) of the Constitution, no citizen of Ghana shall\n";
    text += "    qualify to be appointed as a member of any office specified in this clause if he holds\n";
    text += "    the citizenship of any other country in addition to his citizenship of Ghana-\n";
    text += "(d) Inspector-General of Police;\n";
      t = move(text); cout<< t << endl;
  }
  void Section_2e(string text)
  {
    text += "(2) Without prejudice to article 94 (2a) of the Constitution, no citizen of Ghana shall\n";
    text += "    qualify to be appointed as a member of any office specified in this clause if he holds\n";
    text += "    the citizenship of any other country in addition to his citizenship of Ghana-\n";
    text += "(e) Commissioner, Customs, Excise and Preventive Service;\n";
      t = move(text); cout<< t << endl;
  }
  void Section_2f(string text)
  {
    text += "(2) Without prejudice to article 94 (2a) of the Constitution, no citizen of Ghana shall\n";
    text += "    qualify to be appointed as a member of any office specified in this clause if he holds\n";
    text += "    the citizenship of any other country in addition to his citizenship of Ghana-\n";
    text += "(f) Director of Immigration Service; and...\n";
      t = move(text); cout<< t << endl;
  }
  void Section_2g(string text)
  {
    text += "(2) Without prejudice to article 94 (2a) of the Constitution, no citizen of Ghana shall\n";
    text += "    qualify to be appointed as a member of any office specified in this clause if he holds\n";
    text += "    the citizenship of any other country in addition to his citizenship of Ghana-\n";
    text += "(g) any office specified by an act of Parliament.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_3(string text)
  {
    text += "(3) Where the law of a country requires a person who marries a citizen of that country\n";
    text += "    to renounce the citizenship of his own country by virtue of that marriage, a citizen\n"; 
    text += "    of Ghana who is deprived of his citizenship of Ghana by virtue of that marriage shall\n";
    text += "    on the dissolution of that marriage, become a citizen of Ghana.\n";
      t = move(text); cout<< t << endl;
  }
}

namespace Art_9
{
  uint_least16_t i = 0, ii = 0, iii = 0, iv = 0,
  v = 0, vi = 0, vii = 0, viii;
  string text = "", t = "", s = "";

  void Clause_1(string text)
  {
    cout<<  "                             CITIZENSHIP LAWS BY PARLIAMENT\n\n";
    text += "(1) Parliament may make provision for the acquisition of citizenship of Ghana by persons\n";
    text += "    who are not eligible to become citizens of Ghana under the provisions of this Constitution.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_2(string text)
  {
    text += "(2) Except as otherwise provided in article 7 of this Constitution, a person shall not be\n";
    text += "    registered as a citizen of Ghana unless at the time of his application for registration\n";
    text += "    he is able to speak and understand an indigenous language of Ghana.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_3(string text)
  {
    text += "(3) The High Court may, on an application made for the purpose by the Attorney-General,\n"; 
    text += "    deprive a person who is a citizen of Ghana, otherwise than by birth, of that citizenship\n";
    text += "    on the ground.\n";
      t = move(text); cout<< t << endl;
  }
  void Section_3a(string text)
  {
    text += "(a) that the activities of that person are inimical to the security of\n";
    text += "    the State or prejudicial to public morality or the public interest; or...\n";
      t = move(text); cout<< t << endl;
  }
  void Section_3b(string text)
  {
    text += "(b) that the citizenship was acquired by fraud, misrepresentation\n"; 
    text += "    or any other improper or irregular practice.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_4(string text)
  {
    text += "(4) There shall be published in the Gazette by the appropriate authority and within\n";  
    text += "    three months after the application or the registration, as the case may be, the\n";
    text += "    name, particulars and other details of a person who, under this article applies\n";  
    text += "    to be registered as a citizen of Ghana or has been registered as a citizen of Ghana.\n";
      t = move(text); cout<< t << endl;
  }
  void Section_5a(string text)
  {
    text += "(5) Parliament may make provision by Act of Parliament for-\n";
    text += "(a) the renunciation by any person of his citizenship of Ghana;\n";
      t = move(text); cout<< t << endl;
  }
  void Section_5b(string text)
  {
    text += "(5) Parliament may make provision by Act of Parliament for-\n\n";
    text += "(b) the circumstances in which a person may acquire citizenship\n"; 
    text += "    of Ghana or cease to be a citizen of Ghana.\n";
      t = move(text); cout<< t << endl;
  }
}

namespace Art_10
{
  uint_least16_t i = 0, ii = 0, iii = 0, iv = 0, 
  v = 0, vi = 0, vii = 0, viii = 0;
  string text = "", t = "", s = "";

  void Clause_1(string text)
  {
    cout<<  "                                      INTERPRETATION\n\n";
    text += "(1) A reference in this Chapter to the citizenship of the parent of a person at the time\n";
    text += "    of the birth of that person shall, in relation to a person born after the death of the\n"; 
    text += "    parent, be construed as a reference to the citizenship of the parent at the time of the\n";
    text += "    parent's death.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_2(string text)
  {
    text += "(2) For the purposes of clause(1) of this article, where the death occurred before the\n";
    text += "    coming into force of this Constitution, the citizenship that the parent would have\n";
    text += "    had if he or she had died on the coming into force of this Constitution shall be\n";
    text += "    deemed to be his or her citizenship at the time of his or her death.\n";
      t = move(text); cout<< t << endl;
  }
}

namespace Art_11
{
  uint_least16_t i = 0, ii = 0, iii = 0, iv = 0,
  v = 0, vi = 0, vii = 0, viii = 0;
  string text = "", t = "", s = "";

  void Section_1a(string text)
  { cout<<  "              THE LAWS OF GHANA\n\n";
    text += "(1) The laws of Ghana shall comprise-\n";
    text += "(a) this Constitution;\n";
      t = move(text); cout<< t << endl;
  }
  void Section_1b(string text)
  {
    text += "(1) The laws of Ghana shall comprise-\n\n";
    text += "(b) enactments made by or under the authority of\n";
    text += "    the Parliament established by this Constitution;\n";
      t = move(text); cout<< t << endl;
  }
  void Section_1c(string text)
  {
    text += "(1) The laws of Ghana shall comprise-\n\n";
    text += "(c) any Orders, Rules and Regulations made by any person\n";
    text += "    or authority under a power conferred by this Constitution.\n";
      t = move(text); cout<< t << endl;
  }
  void Section_1d(string text)
  {
    text += "(1) The laws of Ghana shall comprise-\n";
    text += "(d) the existing law; and...\n";
      t = move(text); cout<< t << endl;
  }
  void Section_1e(string text)
  {
    text += "(1) The laws of Ghana shall comprise-\n";
    text += "(e) the common law.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_2(string text)
  {
    text += "(2) The common law of Ghana shall comprise the rules of law generally known as the\n";
    text += "    common law, the rules generally known as the doctrines of equity and the rules\n";
    text += "    of customary law including those determined by the Superior Court of Jusdicature.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_3(string text)
  {
    text += "(3) For the purpose of this article, a customary law means the rules of\n";
    text += "    law which by custom are applicable to particular communities in Ghana.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_4(string text)
  {
    text += "(4) The existing law shall, except as otherwise provided in clause(1) of this article,\n";
    text += "    comprise the written and unwritten laws of Ghana as they existed immediately before\n";
    text += "    the coming into force of this Constitution, and any Act, Decree, Law or statutory\n";
    text += "    instrument issued or made before that date, which is to come into force on or after\n";
    text += "    that date.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_5(string text)
  {
    text += "(5) Subject to the provisions of this Constitution, the existing law\n";
    text += "    shall not be affected by the coming into force of this Constitution.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_6(string text)
  {
    text += "(6) The existing law shall be construed with any modifications, adaptations,\n";
    text += "    qualifications and exceptions necessary to bring it into conformity with \n";
    text += "    the provisions of this Constitution, or otherwise to give effect to, or\n"; 
    text += "    enable effect to be given to, any changes effected by this Constitution.\n";
      t = move(text); cout<< t << endl;
  }
  void Section_7a(string text)
  {
    text += "(7) Any order, Rule or Regulation made by a person or authority under\n";
    text += "    a power conferred by this Constitution or any other law shall-\n";
    text += "(a) be laid before Parliament;\n"; //clause is 1 line
      t = move(text); cout<< t << endl;
  }
  void Section_7b(string text)
  {
    text += "(7) Any order, Rule or Regulation made by a person or authority under\n";
    text += "    a power conferred by this Constitution or any other law shall-\n";
    text += "(b) be published in the Gazette on the day it is laid before Parliament; and...\n";
      t = move(text); cout<< t << endl;
  }
  void Section_7c(string text)
  {
    text += "(7) Any order, Rule or Regulation made by a person or authority under\n";
    text += "    a power conferred by this Constitution or any other law shall-\n\n";//clause(c)is more lines
    text += "(c) come into force at the expiration of twenty-one sitting days after being so laid\n";
    text += "    unless Parliament, before the expiration of the twenty-one days, annuls the order, Rule\n";
    text += "    or Regulation by the votes of not less than two-thirds of all the members of Parliament.\n";
      t = move(text); cout<< t << endl;
  }
}

namespace Art_12
{
  uint_least16_t i = 0, ii = 0, iii = 0, iv = 0,
  v = 0, vi = 0, vii = 0, viii = 0;
  string text = "", t = "", s = "";

  void Clause_1(string text)
  {
    cout<<  "                              PROTECTION OF FUNDAMENTAL HUMAN\n";
    cout<<  "                                    RIGHTS AND FREEDOMS\n\n";
    text += "(1) The fundamental human rights and freedoms enshrined in this Chapter shall be respected\n";
    text += "    and upheld by the Executive, Legislature and Judiciary and all other organs of government\n";
    text += "    and its agencies and, where applicable to them, by all natural and legal persons in\n";
    text += "    Ghana, and shall be enforceable by the Courts as provided for in this Constitution.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_2(string text)
  {
    text += "(2) Every person in Ghana, whatever his race, place of origin, political opinion, colour,\n";
    text += "    religion, creed or gender shall be entitled to the fundamental human rights and freedoms\n";
    text += "    of the individual contained in this Chapter but subject to respect for the rights and\n";
    text += "    freedoms of others and for the public interest.\n";
      t = move(text); cout<< t << endl;
  }
}

namespace Art_13
{
  uint_least16_t i = 0, ii = 0, iii = 0, iv = 0,
  v = 0, vi = 0, vii = 0, viii = 0;
  string text = "", t = "", s = "";

  void Clause_1(string text)
  {
    cout<<  "                                 PROTECTION OF RIGHT TO LIFE\n\n";
    text += "(1) No person shall be deprived of his life intentionally except in the exercise of the\n";
    text += "    execution of a sentence of a court in respect of a criminal offence under the laws\n";
    text += "    of Ghana of which he has been convicted.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_2(string text)
  {
    text += "(2) A person shall not be held to have deprived another person of his life in contravention\n";
    text += "    of clause(1) of this article if that other person dies as the result of a lawful act of\n";
    text += "    war or if that other person dies as the result of the use of force to such an extent as\n";
    text += "    is reasonably justifiable in the particular circumstances-\n";
      t = move(text); cout<< t << endl;
  }
  void Section_2a(string text)
  {
    text += "(a) for the defence of any person from violence or for the defence of property, or...\n";//ok main prints 2
      t = move(text); cout<< t << endl;
  }
  void Section_2b(string text)
  {
    text += "(b) in order to effect a lawful arrest or to prevent the escape of a person lawfully\n";//ok main prints 2
    text += "    detained; or...\n";
      t = move(text); cout<< t << endl;
  }
  void Section_2c(string text)
  {
    text += "(c) for the purposes of suppressing a riot, insurrection or mutiny; or...\n";//ok main prints 2
      t = move(text); cout<< t << endl;
  }
  void Section_2d(string text)
  {
    text += "(d) in order to prevent the commission of a crime by that person.\n";//ok main prints 2
      t = move(text); cout<< t << endl;
  }
}

namespace Art_14
{
  uint_least16_t i = 0, ii = 0, iii = 0, iv = 0,
  v = 0, vi = 0, vii = 0, viii = 0;
  string text = "", t = "", s = "";

  void Clause_1(string text)
  {
    cout<<  "                            PROTECTION OF PERSONAL LIBERTY\n\n";
    text += "(1) Every person shall be entitled to his personal liberty and no person shall be\n";
    text += "    deprived of his personal liberty except in the following cases and in accordance\n";
    text += "    with procedure permitted by law-\n\n";
      t = move(text); cout<< t << endl;
  }
  void Section_1a(string text)
  {
    text += "(a) in execution of a sentence or order of a court in respect of a criminal offence\n";
    text += "    of which he has been convicted; or...\n";
      t = move(text); cout<< t << endl;
  }
  void Section_1b(string text)
  {
    text += "(b) in execution of an order of a court punishing him for contempt of court; or...\n";
      t = move(text); cout<< t << endl;
  }
  void Section_1c(string text)
  {
    text += "(c) for the purpose of bringing him before a court in execution of an order of a court;\n";
    text += "    or...\n";
      t = move(text); cout<< t << endl;
  }
  void Section_1d(string text)
  {
    text += "(d) in the case of a person suffering from an infectious or contagious disease, a\n";
    text += "    person of unsound mind, a person addicted to drugs or alcohol or a vagrant, for\n";
    text += "    the purpose of his care or treatment or the protection of the community; or...\n";
      t = move(text); cout<< t << endl;
  }
  void Section_1e(string text)
  {
    text += "(e) for the purpose of the education or welfare of a person who has not attained the\n";
    text += "    age of eighteen years; or...\n";
      t = move(text); cout<< t << endl;
  }
  void Section_1f(string text)
  {
    text += "(f) for the purpose of preventing the unlawful entry of that person into Ghana, or of\n";
    text += "    effecting the expulsion, extradition or other lawful removal of that person from\n";
    text += "    Ghana or for the purpose of restricting that person while he is being lawfully\n";
    text += "    conveyed through Ghana in the course of his extradiction or removal from one\n";
    text += "    country to another; or...\n";
      t = move(text); cout<< t << endl;
  }
  void Section_1g(string text)
  {
    text += "(g) upon reasonable suspicion of his having committed or being about to commit a\n";
    text += "    criminal offence under the laws of Ghana.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_2(string text)
  {
    text += "(2) A person who is arrested, restricted or detained shall be informed immediately,\n";
    text += "    in a language that he understand, of the reasons for his arrest, restriction\n"; 
    text += "    detention and of his right to a lawyer of his choice.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_3(string text) // no sections for practicability
  {
    text += "(3) A person who is arrested, restricted or detained-\n\n";
    text += "(a) for the purpose of bringing him before a court in execution\n";
    text += "    of an order of a court; or...\n\n";
    text += "(b) upon reasonable suspicion of his having committed or being about to commit\n"; 
    text += "   a criminal offence under the laws of Ghana, and who is not released,\n\n";
    text += "   shall be brought before a court within forty-eight hours after the arrest,\n";
    text += "   restriction or detention.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_4(string text)
  {
    text += "(4) Where a person arrested, restricted or detained under section(a) or (b) of\n";
    text += "    clause(3) of this article is not tried within a reasonable time, then, without\n";
    text += "    prejudice to any further proceedings that may be brought against him, he shall\n";
    text += "    be released either unconditionally or upon reasonable conditions, including in\n";
    text += "    particular, conditions reasonably necessary to ensure that he appears at a later\n";
    text += "    date for trial or for proceedings preliminary to trial.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_5(string text)
  {
    text += "(5) A person who is unlawfully arrested, restricted or detained by any other person\n";
    text += "    shall be entitled to compensation from that other person.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_6(string text)
  {
    text += "(6) Where a person is convicted and sentenced to a term of imprisonment for an offence,\n";
    text += "    any period he has spent in lawful custody in respect of that offence before the\n";
    text += "    completion of his trial shall be taken into account in imposing the term of\n";
    text += "    imprisonment.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_7(string text)
  {
    text += "(7) Where a person who has served the whole or a part of his sentence is acquitted on\n";
    text += "    appeal by a court, other than the Supreme Court that the person acquitted be paid\n";
    text += "    compensation, and the Supreme Court may, upon examination of all the facts and the\n";
    text += "    certificate of the court concerned, award such compensation as it may think fit; or\n";
    text += "    Where the acquittal is by the Supreme Court, it may order compensation to be paid to\n";
    text += "    the person acquitted.\n";
      t = move(text); cout<< t << endl;
  }
}

namespace Art_15
{
  uint_least16_t i = 0, ii = 0, iii = 0, iv = 0,
  v = 0, vi = 0, vii = 0, viii = 0;
  string text = "", t = "", s = "";

  void Clause_1(string text)
  {
    cout<<  "                 RESPECT FOR HUMAN DIGNITY\n\n";
    text += "(1) The dignity of all persons shall be inviolable.\n";                                                       
      t = move(text); cout<< t << endl;
  }
  void Section_2a(string text)
  {
    text += "(2) No person shall, whether or not he is arrested, restricted or\n";
    text += "    retained, be subjected to-\n\n";
    text += "(a) torture or other cruel, inhuman or degrading treatment or\n";
    text += "    punishment;\n"; 
      t = move(text); cout<< t << endl; 
  }
  void Section_2b(string text)
  {
    text += "(2) No person shall, whether or not he is arrested, restricted or\n";
    text += "    retained, be subjected to-\n\n";
    text += "(b) any other condition that detracts or is likely to detract from\n";
    text += "    his dignity and worth as a human being.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_3(string text)
  {
    text += "(3) A person who has not been convicted of a criminal offence shall not be treated\n";
    text += "    as a convicted person and shall be kept separately from convicted persons.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_4(string text)
  {
    text += "(4) A juvenile offender who is kept in lawful custody or detention shall\n";
    text += "    be kept separately from an adult offender.\n";
      t = move(text); cout<< t << endl;
  }
}

namespace Art_16
{
  uint_least16_t i = 0, ii = 0, iii = 0, iv = 0, 
  v = 0, vi = 0, vii = 0, viii = 0;
  string text = "", t = "", s = "";

  void Clause_1(string text)
  {
    cout<<  "         PROTECTION FROM SLAVERY AND FORCED LABOUR\n\n";
    text += "(1) No person shall be held in slavery or servitude.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_2(string text)
  {
    text += "(2) No person shall be required to perform forced labour.\n";
      t = move(text); cout<< t << endl;
  }
  void Section_3a(string text)
  {
    text += "(3) For the purposes of this article, \"forced labour\" does not include-\n";
    text += "(a) any labour required as a result of a sentence or order of a court; or...\n";
      t = move(text); cout<< t << endl;
  }
  void Section_3b(string text)
  {
    text += "(3) For the purposes of this article, \"forced labour\" does not include-\n\n";
    text += "(b) any labour required of a member of a disciplined force or service as his duties\n";
    text += "    or, in the case of a person who has conscientious objections to a service as a member\n";
    text += "    of the Armed Forces of Ghana, any labour which that person is required by law to perform\n";
    text += "    in place of such service; or\n";
      t = move(text); cout<< t << endl;
  }
  void Section_3c(string text)
  {
    text += "(3) For the purposes of this article, \"forced labour\" does not include-\n\n";//2 \n\n if more lines
    text += "(c) any labour required during any period when Ghana is at war or in the event of an emergency\n";
    text += "    or calamity that threatens the life and well-being of the community, to the extent that the\n";
    text += "    requirement of such labour is reasonably justifiable in the circumstances of any situation\n";
    text += "    arising or existing during that period for the purposes of dealing with the situation; or...\n";
      t = move(text); cout<< t << endl;
  }
  void Section_3d(string text)
  {
    text += "(3) For the purposes of this article, \"forced labour\" does not include-\n";//only 1 \n if 1 line
    text += "(d) any labour reasonably required as part of normal communal or other civic obligations.\n";
      t = move(text); cout<< t << endl;
  }
}

namespace Art_17
{
  uint_least16_t i = 0, ii = 0, iii = 0, iv = 0,
  v = 0, vi = 0, vii = 0, viii = 0;
  string text = "", t = "", s = "";

  void Clause_1(string text)
  {
    cout<<  "      EQUALITY AND FREEDOM FROM DISCRIMINATION\n\n";
    text += "(1) All persons shall be equal before the law.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_2(string text)
  {
    text += "(2) A person shall not be discriminated against on grounds of gender, race,\n";
    text += "    colour, ethnic origin, religion, creed or social or economic status.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_3(string text)
  {
    text += "(3) For the purposes of this article, \"discrimination\" means to give different treatment\n";
    text += "    to different persons attributable only or mainly to their respective descriptions by race,\n";
    text += "    place of origin, political opinions, colour, gender, occupation, religion or creed,\n";
    text += "    whereby persons of one description are subjected to disabilities or restrictions to which\n";
    text += "    persons of another description are not made subject or are granted privileges or advantages\n";
    text += "    which are not granted to persons of another description.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_4(string text)
  {
    text += "(4) Nothing in this article shall prevent Parliament from enacting\n"; 
    text += "    laws that are reasonably necessary to provide-\n\n";
      t = move(text); cout<< t << endl;
  }
  void Section_4a(string text)
  {
    text += "(a) for the implementation of policies and programmes aimed at redressing\n";
    text += "    social, economic or educational imbalance in the Ghanaian soceity;\n";
      t = move(text); cout<< t << endl;
  }
  void Section_4b(string text)
  {
    text += "(b) for matters relating to adoption, marriage, divorce, burial, and\n";
    text += "    devolution of property on death or other matters of personal law;\n";
      t = move(text); cout<< t << endl;
  }
  void Section_4c(string text)
  {
    text += "(c) for the imposition of restrictions on the acquisition of land by persons who\n";  
    text += "    are not citizens of Ghana or on the political and economic activities of such\n";
    text += "    persons and for other matters relating to such persons; or\n";
      t = move(text); cout<< t << endl;
  }
  void Section_4d(string text)
  {
    text += "(d) for making different provision for different communities having regard to their\n";
    text += "    special circumstances not being provision which is inconsistent with the spirit\n";
    text += "    of this Constitution.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_5(string text)
  {
    text += "(5) Nothing shall be taken to be inconsistent with this article which\n";
    text += "    is allowed to be done under any provision of this Chapter.\n";
      t = move(text); cout<< t << endl;
  }
}

namespace Art_18
{
  uint_least16_t i = 0, ii = 0, iii = 0, iv = 0,
  v = 0, vi = 0, vii = 0, viii;
  string text = "", t = "", s = "";

  void Clause_1(string text)
  {
    cout<<  "        PROTECTION OF PRIVACY OF HOME AND OTHER PROPERTY\n\n";
    text += "(1) Every person has the right to own property either alone\n";
    text += "    or in association with others.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_2(string text)
  {
    text += "(2) No person shall be subjected to interference with the privacy of his home, property,\n";
    text += "    correspondence or communication except in accordance with law and as may be necessary\n";
    text += "    in a free and democratic soceity for public safety or the economic well-being of the\n";
    text += "    country, for the protection of health or morals, for the prevention of disorder or\n";
    text += "    crime or for the protection of the rights or freedoms of others.\n";
      t = move(text); cout<< t << endl;
  }
}

namespace Art_19
{
  uint_least16_t i = 0, ii = 0, iii = 0, iv = 0,
  v = 0, vi = 0, vii = 0, viii = 0;
  string text = "", t = "", s = "";

  void Clause_1(string text)
  {
    cout<<  "                                     FAIR TRIAL\n\n";
    text += "(1) A person charged with a criminal offence shall be given a fair hearing within a\n";
    text += "    reasonable time by a court.\n";
      t = move(text); cout<< t << endl;
  }
  void Section_2a(string text)
  {
    text += "(2) A person charged with a criminal offence shall-\n\n";
    text += "(a) in the case of an offence other than high treason or treason, the punishment\n";
    text += "    for which is death or imprisonment for life, be tried by a judge and jury and-\n\n";
      t = move(text); cout<< t << endl;
  }
  void Paragraph_i(string text)
  {
    text += "(i) Where the punishment is death, the verdict of the jury shall be unanimous; and\n";
      t = move(text); cout<< t << endl;
  }
  void Paragraph_ii(string text)
  {
    text += "(ii) in the case of life imprisonment, the verdict of the jury shall be by such majority\n";
    text += "     as Parliament may by law prescribe;\n";
      t = move(text); cout<< t << endl;
  }
  void Section_2b(string text)
  {
    text += "(2) A person charged with a criminal offence shall-\n\n";
    text += "(b) in the case of an offence tribal by a Regional Tribunal the penalty for which\n";
    text += "    is dearh, decision of the Chairman and the other panel members shall be unanimous;\n";
      t = move(text); cout<< t << endl;
  }
  void Section_2c(string text)
  {
    text += "(2) A person charged with a criminal offence shall-\n";
    text += "(c) be presumed to be innocent until he is proved guilty or has pleaded guilty;\n";
      t = move(text); cout<< t << endl;
  }
  void Section_2d(string text)
  {
    text += "(2) A person charged with a criminal offence shall-\n\n";
    text += "(d) be informed immediately in a language that he understands, and in detail; of\n";
    text += "    the nature of the offence charged;\n";
      t = move(text); cout<< t << endl;
  }
  void Section_2e(string text)
  {
    text += "(2) A person charged with a criminal offence shall-\n";
    text += "(e) be given adequate time and facilities for the preparation of his defence;\n";
      t = move(text); cout<< t << endl;
  }
  void Section_2f(string text)
  {
    text += "(2) A person charged with a criminal offence shall-\n\n";
    text += "(f) be permitted to defend himself before the court in person or by\n"; 
    text += "    a lawyer of his choice;\n";
      t = move(text); cout<< t << endl;
  }
  void Section_2g(string text)
  {
    text += "(2) A person charged with a criminal offence shall-\n\n";
    text += "(g) be afforded facilities to examine, in person or by his lawyer, the withnesses\n";
    text += "    called by the prosecution before the court, and to obtain the attendance and\n";
    text += "    carry out the examination of withnesses to testify on the same conditions as\n";
    text += "    those applicable to withnesses called by the prosecution;\n";
      t = move(text); cout<< t << endl;
  }
  void Section_2h(string text)
  {
    text += "(2) A person charged with a criminal offence shall-\n\n";
    text += "(h) be permitted to have, without payment by him, the assistance of an interpreter\n";
    text += "    where he cannot understand the language used in the trial; and\n";
      t = move(text); cout<< t << endl;
  }
  void Section_2i(string text)
  {
    text += "(2) A person charged with a criminal offence shall-\n\n";
    text += "(i) in the case of the offence of high treason or treason, be tried by the\n";
    text += "    High Court and the decision of the Justices shall be unanimous.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_3(string text)
  {
    text += "(3) The trial of a person charged with a criminal offence shall take place\n";
    text += "    in his presence unless;\n\n";
      t = move(text); cout<< t << endl;
  }
  void Section_3a(string text)
  {
    text += "(a) he refuses to appear before the court for the trial to be conducted in\n";
    text += "    his presence after he has been duly notified of the trial; or...\n";
      t = move(text); cout<< t << endl;
  }
  void Section_3b(string text)
  {
    text += "(b) he conducts himself in such a manner as to render the continuation of the\n";
    text += "    proceedings in his presence impracticable and the court orders him to be\n";
    text += "    removed for the trial to proceed in his absence.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_4(string text) 
  {
    text += "(4) Whenever a person is tried for a criminal offence the accused person or a\n";
    text += "    person authorised by him shall, if he so requires, be given, within a\n";
    text += "    reasonable time not exceeding six months after judgment, a copy of any\n";
    text += "    record of the proceedings made by or on behalf of the court for the use\n";
    text += "    of the accused person.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_5(string text)
  {
    text += "(5) A person shall not be charged with or held to be guilty of a criminal offence\n";
    text += "    which is founded on an act or omission that did not at the time it took place\n";
    text += "    constitute an offence.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_6(string text)
  {
    text += "(6) No penalty shall be imposed for a criminal offence that is severer in degree\n";
    text += "    or description than the maximum penalty that could have been imposed for that\n";
    text += "    offence at the time when it was committed.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_7(string text)
  {
    text += "(7) No person who shows that he has been tried by a competent court for a criminal\n";
    text += "    offence and either convicted or acquitted, shall again be tried for that offence\n";
    text += "    or for any other criminal offence of which he could have been convicted at the\n";
    text += "    trial for the offence, except on the order of a superior court in the course of\n";
    text += "    appeal or review proceedings relating to the conviction or acquittal.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_8(string text)
  {
    text += "(8) Notwithstanding clause(7) of this article, an acquittal of a person on a trial for\n";
    text += "    high treason or treason shall not be a bar to the institution of proceedings for any\n";
    text += "    other offence against that person.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_9(string text)
  {
    text += "(9) Section(a) and (b) of clause(2) of this article shall not apply in the case of a\n";
    text += "    trial by a court-martial or other military tribunal.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_10(string text)
  {
    text += "(10) No person who is tried for a criminal offence shall be compelled to give evidence\n";
    text += "     at the trial.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_11(string text)
  {
    text += "(11) No person shall be convicted of a criminal offence unless the offence is defined\n";
    text += "     and the penalty for it is prescribed in a written law.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_12(string text)
  {
    text += "(12) Clause(11) of this article shall not prevent a Superior Court from punishing\n";
    text += "     a person for contempt of itself notwithstanding that the act or omission\n";
    text += "     constituting the contempt is not defined in a written law and the penalty is\n";
    text += "     not so prescribed.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_13(string text)
  {
    text += "(13) An adjudicating authority for the determination of the existence or extent\n"; 
    text += "     of a civil right or obligation shall, subject to the provisions of this\n";
    text += "     Constitution, be established by law and shall be independent and impartial;\n";
    text += "     and where proceedings for determination are instituted by a person before such\n";
    text += "     an adjudicating authority, the case shall be given a fair hearing within a\n";
    text += "     reasonable time.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_14(string text)
  {
    text += "(14) Except as may be otherwise ordered by the adjudicating authority in the interest\n";
    text += "     of public morality, public safety, or public order the proceedings of any such\n";
    text += "     adjudicating authority shall be in public.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_15(string text)
  {
    text += "(15) Nothing in this article shall prevent an adjudicating authority from excluding \n";
    text += "     from the proceeding persons, other than the parties to the proceedings and their\n";
    text += "     lawyers, to such an extent as the authority-\n\n";
      t = move(text); cout<< t << endl;
  }
  void Section_15a(string text)
  {
    text += "(a) may consider necessary or expedient in circumstances where publicity would\n";
    text += "    prejudice the interests of justice; or\n";
      t = move(text); cout<< t << endl;
  }
  void Section_15b(string text)
  {
    text += "(b) may be empowered by law to do in the interest of defence, public safety, public\n";
    text += "    order, public morality, the welfare of persons under the age of eighteen or the\n";
    text += "    protection of the private lives of persons concerned in the proceedings.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_16(string text)
  {
    text += "(16) Nothing in, or done under the authority of, any law shall be held to be inconsistent\n";
    text += "     with or in contravention of, the following provisions-\n\n";
      t = move(text); cout<< t << endl;
  }
  void Section_16a(string text)
  {
    text += "(a) section(c) of clause(2) of this article, to the extent that the law in question\n";
    text += "    imposes upon a person charged with a criminal offence, the burden of providing\n";
    text += "    facts; or...\n";
      t = move(text); cout<< t << endl;
  }
  void Section_16b(string text)
  {
    text += "(b) clause(7) of this article, to the extent that the law in question authorises a\n";
    text += "    court to try a member of a disciplined force for a criminal offence notwithstanding\n";
    text += "    any trial and conviction or acquittal of that member under the disciplinary law of\n";
    text += "    the force, except that any court which tries that member and convicts him shall, in\n";
    text += "    sentencing him to any punishment, take into account any punishment imposed on him\n";
    text += "    under that disciplinary law.\n";
      t = move(text); cout<< t << endl;
  }
  void Section_17a(string text)
  {
    text += "(17) Subject to clause(18) of this article, treason shall consist only-\n\n";
    text += " (a) in levying war against Ghana or assisting any state or person or inciting\n";
    text += "     or conspiring with any person to levy war against Ghana; or...\n";
      t = move(text); cout<< t << endl;
  }
  void Section_17b(string text)
  {
    text += "(17) Subject to clause(18) of this article, treason shall consist only-\n\n";
    text += " (b) in attempting by force of arms or other violent means to overthrow the organs of\n";
    text += "     government established by or under this Constitution; or...\n";
      t = move(text); cout<< t << endl;
  }
  void Section_17c(string text)
  {
    text += "(17) Subject to clause(18) of this article, treason consist only-\n\n";
    text += " (c) in taking part or being concerned in or inciting or conspiring with\n";
    text += "     any person to make or take part or be concerned in, any such attempt.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_18(string text)
  {
    text += "(18) An act which aims at procuring by constitutional means an alteration of\n";
    text += "     the law or of the policies of the Government shall not be considered as an\n";
    text += "     act calculated to overthow the organs of government.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_19(string text)
  {
    text += "(19) Notwithstanding any other provision of this article, but subject to clause(20)\n";
    text += "     of this article, Parliament may, by or under an Act of Parliament, establish\n";
    text += "     military courts or tribunal for the trial of offences against military law\n";
    text += "     committed by persons subject to military law.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_20(string text)
  {
    text += "(20) Where a person subject to military law, who is not in active service, commits\n";
    text += "     an offence which is within the jurisdiction of a civil court, he shall not be\n";
    text += "     tried by a court-martial or military tribunal for the offence unless the offence\n";
    text += "     is within the jurisdiction of a court-martial or other military tribunal under\n";
    text += "     any law for the enforcement of military discipline.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_21(string text)
  {
    text += "(21) For the purposes of this article, \"criminal offence\" means a criminal offence\n";
    text += "     under the laws of Ghana.\n";
      t = move(text); cout<< t << endl;
  }
}

namespace Art_20
{
  uint_least16_t i = 0, ii = 0, iii = 0, iv = 0,
  v = 0, vi = 0, vii = 0, viii = 0;
  string text = "", t = "", s = "";

  void Clause_1(string text)
  {
    cout<<  "                        PROTECTION FROM DEPRIVATION OF PROPERTY\n\n";
    text += "(1) No property of any description or interest in or right over any property shall be\n";
    text += "    compulsorily taken possession of or acquired by the State unless the following\n";
    text += "    conditions are satisfied.\n";
      t = move(text); cout<< t << endl;
  }
  void Section_1a(string text)
  {
    text += "(a) the taking of possession or acquisition is necessary in the interest of defence,\n";
    text += "    public safety, public order, public morality, public health, town and country\n";
    text += "    planning or the development or utilization of property in such a manner as to\n";
    text += "    promote the public benefit; and...\n";
      t = move(text); cout<< t << endl;
  }
  void Section_1b(string text)
  {
    text += "(b) the necessity for the acquisition is clearly stated and is such as to provide\n";
    text += "    reasonable justification for causing any hardship that may result to any person\n";
    text += "    who has an interest in or right over the property.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_2(string text)
  {
    text += "(2) Compusory acquisition of property by the State shall only be made under a law\n";
    text += "    which makes provision for...\n";
      t = move(text); cout<< t << endl;
  }
  void Section_2a(string text)
  {
    text += "(a) the prompt payment of fair and adequate compensation; and...\n";
      t = move(text); cout<< t << endl;
  }
  void Section_2b(string text)
  {
    text += "(b) a right of access to the High Court by any person who has an interest in or right\n";
    text += "    over the property whether direct or on appeal from other authority, for the\n";
    text += "    determination of his interest or right and the amount of compensation to which\n";
    text += "    he is entitled.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_3(string text)
  {
    text += "(3) Where a compulsory acquisition or possession of land effected by the State in\n";
    text += "    accordance with clause(1) of this article involves displacement of any inhabitants,\n";
    text += "    the State shall resettle the displaced inhabitants on suitable alternative land with\n";
    text += "    due regard for their economic well-being and social and cultural values.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_4(string text)
  {
    text += "(4) Nothing in this article shall be construed as affecting the operation of any general\n";
    text += "    law so far as it provides for the taking of possession or acquisition of property-\n";
      t = move(text); cout<< t << endl;
  }
  void Section_4a(string text)
  {
    text += "(a) by way of vesting or administration of trust property, enemy property or the property\n";
    text += "    of persons adjudged or otherwise declared bankrupt or insolvent, persons of unsound\n";
    text += "    mind, deceased persons or bodies corporate or unincorporated in the course of being\n";
    text += "    wound up; or...\n";
      t = move(text); cout<< t << endl;
  }
  void Section_4b(string text)
  {
    text += "(b) in the execution of a judgement or order of a court; or...\n";
      t = move(text); cout<< t << endl;
  }
  void Section_4c(string text)
  {
    text += "(c) by reason of its being in a dangerous state or injurious to\n";
    text += "    the health of human beings, animals or plants; or...\n";
      t = move(text); cout<< t << endl;
  }
  void Section_4d(string text)
  {
    text += "(d) in consequence of any law with respect to the limitation of actions; or...\n";
      t = move(text); cout<< t << endl;
  }
  void Section_4e(string text)
  {
    text += "(e) for so long only as may be necessary for the purpose of any examination,\n";
    text += "    investigation, trial or inquiry; or...\n";
      t = move(text); cout<< t << endl;
  }
  void Section_4f(string text)
  {
    text += "(f) for so long as may be necessary for the carrying out of work on any land for\n";
    text += "    the purpose of the provision of public facilities or utilities, except that where\n";
    text += "    any damage results from any such work there shall be paid appropriate compensation.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_5(string text)
  {
    text += "(5) Any property compulsorily taken possession of or acquired in the public interest or\n";
    text += "    for a public purpose shall be used only in the public interest or for the public\n";
    text += "    purpose for which it was acquired.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_6(string text)
  {
    text += "(6) Where the property is not used in the public interest or for the purpose for which it\n";
    text += "    was acquired, the owner of the property immediately before the compulsory acquisition,\n";
    text += "    shall be given the first option for acquiring the property and shall, on such\n";
    text += "    re-acquisition refund the whole or part of the compensation paid to him as provided for\n";
    text += "    by law or such other amount as is commensurate with the value of the property at the\n";
    text += "    time of the re-acquisition.\n";
      t = move(text); cout<< t << endl;
  }
}

namespace Art_21
{
  uint_least16_t i = 0, ii = 0, iii = 0, iv = 0,
  v = 0, vi = 0, vii = 0, viii;
  string text = "", t = "", s = "";

  void Section_1a(string text)
  {
    cout<<  "        GENERAL FUNDAMENTAL FREEDOMS\n\n";
    text += "(1) All persons shall have the right to-\n\n";
    text += "(a) freedom of speech and expression, which shall\n";
    text += "    include freedom of the press and other media;\n"; 
      t = move(text); cout<< t << endl;
  }
  void Section_1b(string text)
  {
    text += "(1) All persons shall have the right to-\n\n";
    text += "(b) freedom of thought, conscience and belief, which shall include academic freedom;\n";
      t = move(text); cout<< t << endl;
  }
  void Section_1c(string text)
  {
    text += "(1) All persons shall have the right to-\n\n";
    text += "(c) freedom of practice any religion and to manifest such practice;\n";
      t = move(text); cout<< t << endl;
  }
  void Section_1d(string text)
  {
    text += "(1) All persons shall have the right to-\n\n";
    text += "(d) freedom of assembly including freedom to take\n";
    text += "    part in processions and demonstrations;\n";
      t = move(text); cout<< t << endl;
  }
  void Section_1e(string text)
  {
    text += "(1) All persons shall have the right to-\n\n";
    text += "(e) freedom of association, which shall include freedom to form or join trade unions or\n";
    text += "    other associations, national or international, for the protection of their interest;\n";
      t = move(text); cout<< t << endl;
  }
  void Section_1f(string text)
  {
    text += "(1) All persons shall have the right to-\n\n";
    text += "(f) information, subject to such qualifications and laws\n";
    text += "    as are necessary in a democratic society;\n";
      t = move(text); cout<< t << endl;
  }
  void Section_1g(string text)
  {
    text += "(1) All persons shall have the right to-\n\n";
    text += "(g) freedom of movement which means the right to move freely in Ghana, the right\n";
    text += "    to leave and to enter Ghana and immunity from expulsion from  Ghana.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_2(string text)
  {
    text += "(2) A restriction on a person's freedom of movement by his lawful detention shall not\n";
    text += "    be held to be inconsistent with or in contravention of this article\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_3(string text)
  {
    text += "(3) All citizens shall have the right and freedom to form or join political parties and\n";
    text += "    to participate in political activities subject to such qualifications and laws as are\n";
    text += "    necessary in a free and democratic society and are consistent with this Constitution.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_4(string text)
  {
    text += "(4) Nothing in, or done under the authority of, a law shall be held to be inconsistent\n";
    text += "    with, or in contravention of, this article to the extent that the law in question\n";
    text += "    makes provision-\n\n";
      t = move(text); cout<< t << endl;
  }
  void Section_4a(string text)
  {
    text += "(a) for the imposition of restrictions by order of a court, that are required in the\n";
    text += "    interest of defence, public safety or public order, on the movement or residence within\n";
    text += "    Ghana of any person; or ...\n";
      t = move(text); cout<< t << endl;
  }
  void Section_4b(string text)
  {
    text += "(b) for the imposition of restrictions, by order of a court, on the movement or residence\n";
    text += "    within Ghana of any personeither as a result of his having been found guilty of a\n";
    text += "    criminal offence under the laws of Ghana or for the purposes of ensuring that he appears\n";
    text += "    before a court at a later date for trial for a criminal offence or for proceedings\n";
    text += "    relating to his extradition or lawful removal from Ghana; or...\n";
      t = move(text); cout<< t << endl;
  }
  void Section_4c(string text)
  {
    text += "(c) for the imposition of restrictions that are reasonably required in the interest of defence,\n";
    text += "    public safety, public health or the running of essential services, on the movement or\n";
    text += "    residence within Ghana of any person or persons generally, or any class of persons; or...\n";
      t = move(text); cout<< t << endl;
  }
  void Section_4d(string text)
  {
    text += "(d) for the imposition of restrictions on the freedom of entry into Ghana, or of movement in\n";
    text += "    Ghana, of a person who is not a citizen of Ghana; or...\n";
      t = move(text); cout<< t << endl;
  }
  void Section_4e(string text)
  {
    text += "(e) that is reasonably required for the purpose of safeguarding the people of Ghana against\n";
    text += "    the teaching or propagation of a doctrine which exhibits or encourages disrespect for the\n";
    text += "    nationhood of Ghana, the national symbols and emblems, or incites hatred against other\n";
    text += "    members of the community.\n\n";
    text += "    except so far as that provision or, as the case may be, the thing done under the\n";
    text += "    authority of that law is shown not to be reasonably justifiable in terms of the spirit\n";
    text += "    of this Constitution.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_5(string text)
  {
    text += "(5) Whenever a person, whose freedom of movement has been restricted by the order of a court\n";
    text += "    under section(a) of clause(4) of this article, requests at any time during the period of\n";
    text += "    that restriction not earlier than seven days after the order was made, or three months\n";
    text += "    after he last made such request, as the case may be, his case shall be reviewed by\n";
    text += "    that court.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_6(string text)
  {
    text += "(6) On a review by a court under clause(5) of this article, the court may, subject to the\n";
    text += "    right of appeal from its decision, make such order for the continuation or termination\n";
    text += "    of the restriction as it considers necessary or expedient.\n";
      t = move(text); cout<< t << endl;
  }
}

namespace Art_22
{
  uint_least16_t i = 0, ii = 0, iii = 0, iv = 0,
  v = 0, vi = 0, vii = 0, viii = 0;
  string text = "", t = "", s = "";

  void Clause_1(string text)
  {
    cout<<  "                                  PROPERTY RIGHTS OF SPOUSES\n\n";
    text += "(1) A spouse shall not be deprived of a reasonable provision out of the estate of a spouse\n";
    text += "    whether or not the spouse died having made a will.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_2(string text)
  {
    text += "(2) Parliaent shall, as soon as practicable after the coming into force of this Constitution,\n";
    text += "    enact legislation regulating the property rights of spouses.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_3(string text)
  {
    text += "(3) With a view to achieving the full realisation of the rights referred to in clause(2) of\n";
    text += "    this article-\n";
      t = move(text); cout<< t << endl;
  }
  void Section_3a(string text)
  {
    text += "(a) spouses shall have equal access to property jointly acquired during marriage;\n";
      t = move(text); cout<< t << endl;
  }
  void Section_3b(string text)
  {
    text += "(b) assets which are jointly acquired during marriage shall be distributed equitably between\n";
    text += "    the spouses upon dissolution of the marriage.\n";
      t = move(text); cout<< t << endl;
  }
}

namespace Art_23
{
  uint_least16_t i = 0, ii = 0, iii = 0, iv = 0,
  v = 0, vi = 0, vii = 0, viii = 0;
  string text = "", t = "", s = "";

  void Article_23(string text)
  {
    cout<<  "                                    ADMINISTRATIVE JUSTICE\n\n";
    text += "(23) Administrative bodies and administrative officials shall act fairly and reasonably and\n";
    text += "     comply with the requirements imposed on them by law and persons aggrieved by the exercise\n";
    text += "     of such acts and decisions shall have the right to seek redress before a court or other\n";
    text += "     tribunal.\n";
      t = move(text); cout<< t << endl;
  }
}

namespace Art_24
{
  uint_least16_t i = 0, ii = 0, iii = 0, iv = 0,
  v = 0, vi = 0, vii = 0, viii = 0;
  string text = "", t = "", s = "";

  void Clause_1(string text)
  {
    cout<<  "                                    ECONOMIC RIGHTS\n\n";
    text += "(1) Every person has the right to work under satisfactory, safe and healthy conditions, and\n";
    text += "    shall receive equal pay for equal work without distinction of any kind.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_2(string text)
  {
    text += "(2) Every worker shall be assured of rest, leisure and reasonable limitation of working hours\n";
    text += "    and periods of holidays with pay, as well as remuneration for public holidays.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_3(string text)
  {
    text += "(3) Every worker has the right to form or join a trade union of his choice for the promotion\n";
    text += "    and protection of his economic and social interests.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_4(string text)
  {
    text += "(4) Restrictions shall not be placed on the exercise of the right conferred by clause(3) of\n";
    text += "    this article except restrictions prescribed by law and reasonably necessary in the interest\n";
    text += "    of national security or public order or for the protection of the rights and freedoms of\n";
    text += "    others.\n";
      t = move(text); cout<< t << endl;
  }
}

namespace Art_25
{
  uint_least16_t i = 0, ii = 0, iii = 0, iv = 0,
  v = 0, vi = 0, vii = 0, viii;
  string text = "", t = "", s = "";

  void Clause_1(string texr)
  {
    cout<<  "                                       EDUCATIONAL RIGHTS\n\n";
    text += "(1) All persons shall have the right to equal education opportunities and facilities and with\n";
    text += "    a view to achieving the full realisation of that right-\n";
      t = move(text); cout<< t << endl;
  }
  void Section_1a(string text)
  {
    text += "(a) basic education shall be free, compulsory and available to all;\n";
      t = move(text); cout<< t << endl;
  }
  void Section_1b(string text)
  {
    text += "(b) secondary education in its different forms, including technical and vocational education,\n";
    text += "    shall be made generally available and accessible to all by every appropriate means, and in\n";
    text += "    particular, by the progressive introduction of free education;\n";
      t = move(text); cout<< t << endl;
  }
  void Section_1c(string text)
  {
    text += "(c) higher education shall be made equally accessible to all, on the basis of capacity, by every\n";
    text += "    appropriate means, and in particular, by progressive introduction of free education;\n";
      t = move(text); cout<< t << endl;
  }
  void Section_1d(string text)
  {
    text += "(d) functional literacy shall be encouraged or intensified as far as possible;\n";
      t = move(text); cout<< t << endl;
  }
  void Section_1e(string text)
  {
    text += "(e) the development of a system of schools with adequate facilities at all levels shall be\n";
    text += "    actively pursued.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_2(string text)
  {
    text += "(2) Every person shall have the right, at his own expense, to establish and maintain a private\n";
    text += "    school or schools at all levels and of such categories and in accordance with such conditions\n";
    text += "    as may be provided by law.\n";
      t = move(text); cout<< t << endl;
  }
}

namespace Art_26
{
  uint_least16_t i = 0, ii = 0, iii = 0, iv = 0,
  v = 0, vi = 0, vii = 0, viii;
  string text = "", t = "", s = "";

  void Clause_1(string text)
  {
    cout<<  "                               CULTURAL RIGHTS AND PRACTICES\n\n";
    text += "(1) Every person is entitled to enjoy, practice, profess, maintain and promote any culture,\n";
    text += "    language, tradition or religion subject to the provisions of this Constitution.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_2(string text)
  {
    text += "(2) All customary practices which dehumanise or are injurious to the physical and mental well\n";
    text += "    being of a person are prohibited.\n";
      t = move(text); cout<< t << endl;
  }
}

namespace Art_27
{
  uint_least16_t i = 0, ii = 0, iii = 0, iv = 0,
  v = 0, vi = 0, vii = 0, viii;
  string text = "", t = "", s = "";

  void Clause_1(string text)
  {
    cout<<  "                                     WOMEN'S RIGHTS\n\n";
    text += "(1) Special care shall be accorded to mothers during a reasonable period before and after\n";
    text += "    childbirth; and during those periods, working mothers shall be accorded paid leave.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_2(string text)
  {
    text += "(2) Facilities shall be provided for the care of children below school-going age to enable\n";
    text += "    women, who have the traditional care for children, realise their full potential.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_3(string text)
  {
    text += "(3) Women shall be guaranteed equal rights to training and promotion without any impediments\n";
    text += "    from any person\n";
      t = move(text); cout<< t << endl;
  }
}

namespace Art_28
{
  uint_least16_t i = 0, ii = 0, iii = 0, iv = 0,
  v = 0, vi = 0, vii = 0, viii = 0;
  string text = "", t = "", s = "";

  void Section_1a(string text)
  {
    cout<<  "                                   CHILDREN'S RIGHTS\n\n";
    text += "(1) Parliament shall enact such laws as are necessary to ensure that-\n\n";
    text += "(a) every child has the right to the same measure of special care, assistance and maintainance\n";
    text += "    as is necessary for its development from its natural parents, except where those parents\n";
    text += "    have effectively surrendered their rights and responsibilities in respect of the child in\n";
    text += "    accordance with law.\n";
      t = move(text); cout<< t << endl;
  }
  void Section_1b(string text)
  {
    text += "(b) every child, whether or not born in wedlock, shall be entitled to reasonable provision\n";
    text += "    out of the estate of its parents;\n";
      t = move(text); cout<< t << endl;
  }
  void Section_1c(string text)
  {
    text += "(c) parents undertake their natural right and obligation of care, maintainance and upbringing\n";
    text += "    of their children in co-operation with such institutions as Parliament may, by law,\n";
    text += "    prescribe in such manner that in all cases the interest of the children are paramount;\n";
      t = move(text); cout<< t << endl;
  }
  void Section_1d(string text)
  {
    text += "(d) children and young persons receive special protection against exposure to physical and\n";
    text += "    moral hazards; and...\n";
      t = move(text); cout<< t << endl;
  }
  void Section_1e(string text)
  {
    text += "(e) the protection and advancement of the family as a unit of society are safeguarded in\n";
    text += "    promotion of the interest of children.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_2(string text)
  {
    text += "(2) Every child has the right to be protected from engaging in work that constitutes a\n";
    text += "    threat to his health, education or development.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_3(string text)
  {
    text += "(3) A child shall not be subjected to torture or other cruel, inhuman or degrading treatment\n";
    text += "    or punishment.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_4(string text)
  {
    text += "(4) No child shall be deprived by any other person of medical treatment, education or any other\n";
    text += "    social or economic benefit by reason only of religious or other beliefs.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_5(string text)
  {
    text += "(5) For the purposes of this article, \"child\" means a person below the age of eighteen years.\n";
      t = move(text); cout<< t << endl;
  }
}

namespace Art_29
{
  uint_least16_t i = 0, ii = 0, iii = 0, iv = 0, 
  v = 0, vi = 0, vii = 0, viii = 0;
  string text = "", t = "", s = "";

  void Clause_1(string text)
  {
    cout<<  "                             RIGHTS OF DISABLED PERSONS\n\n";
    text += "(1) Disabled persons have the right to live with their families or with foster parents and to\n";
    text += "    participate in social, creative or recreational activities.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_2(string text)
  {
    text += "(2) A disabled person shall not be subjected to different treatment in respect of his residence\n";
    text += "    other than that required by his condition or by the improvement which he may derive from\n";
    text += "    the treatment.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_3(string text)
  {
    text += "(3) If the stay of a disabled person in a specialised establishment is indispensable, the\n";
    text += "    environment and living conditions there shall be as close as possible to those of the\n";
    text += "    normal life of a person of his age.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_4(string text)
  {
    text += "(4) Disabled persons shall be protected against al exploitation, all discriminatory, abusive\n";
    text += "    or degrading nature.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_5(string text)
  {
    text += "(5) In any judicial proceedings in which a disabled person is a party the legal procedure\n";
    text += "    applied shall take his physical and mental condition into account.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_6(string text)
  {
    text += "(6) As far as practicable, every place to which the public have access shall have appropriate\n";
    text += "    facilities for disabled persons.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_7(string text)
  {
    text += "(7) Special incentives shall be given to disabled persons engaged in business and also to\n";
    text += "    business organisations that employ disabled persons in significant numbers.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_8(string text)
  {
    text += "(8) Parliament shall enact such laws as are necessary to ensure the enforcement of the\n";
    text += "    provisions of this article.\n";
      t = move(text); cout<< t << endl;
  }
}

namespace Art_30
{
  uint_least16_t i = 0, ii = 0 , iii = 0 , iv = 0,
  v = 0, vi = 0, vii = 0, viii = 0;
  string text = "", t = "", s = "";

  void Article_30(string text)
  {
    cout<<  "                                         RIGHTS OF THE SICK\n\n";
    text += "(30) A person who by reason of sickness or any other cause is unable to give his consent shall\n";
    text += "     not be deprived by any other person of medical treatment, education or any other social or\n";
    text += "     economic benefit by reason only of religious or other beliefs\n";
      t = move(text); cout<< t << endl;
  }
}

namespace Art_31
{
  uint_least16_t i = 0, ii = 0, iii = 0, iv = 0,
  v = 0, vi = 0, vii = 0, viii = 0 ;
  string text = "", t = "", s = "";

  void Clause_1(string text)
  {
    cout<<  "                                    EMERGENCY POWERS\n\n";
    text += "(1) The President may, acting in accordance with the advice of the Council of State, by\n";
    text += "    Proclamation published in the Gazette, declare that a state of emergency exists in Ghana\n";
    text += "    or in any part of Ghana for the purposes of the provisions of this Constitution.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_2(string text)
  {
    text += "(2) Notwithstanding any other provision of this article, where a proclamation is published\n";
    text += "    under clause(1) of this article, the President shall place immediately before Parliament,\n";
    text += "    the facts and circumstances leading to the declaration of the state of emergency.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_3(string text)
  {
    text += "(3) Parliament shall, within seventy-two hours after being so notified, decide whether the\n";
    text += "    proclamation should remain in force or should be revoked; and the President shall act in\n";
    text += "    accordance with the decision of Parliament.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_4(string text)
  {
    text += "(4) A declaration of a state of emergency shall cease to have effect at the expiration of a\n";
    text += "    period of seven days beginning with the date of publication of the declaration, unless,\n";
    text += "    before the expiration of that period, it is approved by a resolution passed for that purpose\n";
    text += "    by a majority of all the members of Parliament.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_5(string text)
  {
    text += "(5) Subject to clause(7) of this article, a declaration of a state of emergency approved by a\n";
    text += "    resolution of Parliament under clause(4) of this article shall continue in force until the\n";
    text += "    expiration of a period of three months beginning with the date of its being so approved or\n";
    text += "    until such earlier date as may be specified in the resolution.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_6(string text)
  {
    text += "(6) Parliament may, by resolution passed by a majority of all members of Parliament, extend its\n";
    text += "    approval of the declaration for periods of not more than one month at a time.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_7(string text)
  {
    text += "(7) Parliament may, by a resolution passed by a majority of all the members of Parliament, at\n";
    text += "    any time, revoke a declaration of a state of emergency approved by Parliament under this\n"; 
    text += "    article.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_8(string text)
  {
    text += "(8) For the avoidance of doubt, it is hereby declared that the provisions of any enactment,\n"; 
    text += "    other than an Act of Parliament, dealing with a state of emergency declared under clause(1)\n"; 
    text += "    of this article shall apply only to that part of Ghana where the emergency exists.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_9(string text)
  {
    text += "(9) The circumstances under which a state of emergency may be declared under this article\n"; 
    text += "    include a natural disaster and any situation in which any action is taken or is immediately\n";
    text += "    threatened to be taken by any person or body of persons which-\n\n";
      t = move(text); cout<< t << endl;
  }
  void Section_9a(string text)
  {
    text += "(a) is calculated or likely to deprive he community of the essentials of life; or...\n";
      t = move(text); cout<< t << endl;
  }
  void Section_9b(string text)
  {
    text += "(b) renders necessary the taking of measures which are required for securing the public safety,\n";
    text += "    the defence of Ghana and the maintenance of public order and supplies and services essential\n";
    text += "    to the life of the community.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_10(string text)
  {
    text += "(10) Nothing in, or done under the authority of, an Act of Parliament shall be held to be\n";
    text += "     inconsistent with, or in contravention of, article 12 to 30 of this Constitution to the\n";
    text += "     extent that the Act in question authorises the taking, during any period when a state of\n"; 
    text += "     emergency is in force, of measures that are reasonably justifiable for the purposes of\n"; 
    text += "     dealing with the situation that exists during that period.\n";
      t = move(text); cout<< t << endl;
  }
}

namespace Art_32
{
  uint_least16_t i = 0, ii = 0, iii = 0, iv = 0,
  v = 0, vi = 0, vii = 0, viii;
  string text = "", t = "", s = "";

  void Clause_1(string text)
  {
    cout<<  "                            PERSONS DETAINED UNDER EMERGENCY LAW\n\n";
    text += "(1) Where a person is restricted or detained by virtue of a law made pursuant to a declaration\n"; 
    text += "    of a state of emergency, the following provisions shall apply.\n\n";
      t = move(text); cout<< t << endl;
  }
  void Section_1a(string text)
  {
    text += "(a) he shall as soon as practicable, and in any case not later than twenty-four hours after\n";
    text += "    the commencement of the restriction or detention, be furnished with a statement in writing\n";
    text += "    specifying in detail the grounds upon which he is restricted or detained and the statement\n";
    text += "    shall be read or interpreted to the person restricted or detained;\n";
      t = move(text); cout<< t << endl;
  }
  void Section_1b(string text)
  {
    text += "(b) the spouse, parent, child or other available next of kin of the person restricted or\n";
    text += "    detained shall be informed of the detention or restriction within twenty-four hours after\n"; 
    text += "    the commencement of the detention or restriction and be permitted access to the person at\n"; 
    text += "    the earliest practicable opportunity, and in any case within twenty-four hours after the\n";
    text += "    commencement of the restriction or detention;\n";
      t = move(text); cout<< t << endl;
  }
  void Section_1c(string text)
  {
    text += "(c) not more than ten days after the commencement of his restriction or detention, a notification\n";
    text += "    shall be published in the Gazette and in the media stating that he had been restricted or\n";
    text += "    detained and giving particulars of the provision of law under which his restriction or\n";
    text += "    detention is authorised and the grounds of his restriction or detention;\n";
      t = move(text); cout<< t << endl;
  }
  void Section_1d(string text)
  {
    text += "(d) not more than ten days after the commencement of his restriction or detention, and after\n";
    text += "    that, during his restriction or detention, at intervals of not more than three months, his\n";
    text += "    case shall be reviewed by a tribunal composed of not less than three Justices of the Superior\n"; 
    text += "    Court of Judicature appointed by the Chief Justice; except that the same tribunal shall not\n"; 
    text += "    review more than once the case of a person restricted or detained;\n";
      t = move(text); cout<< t << endl;
  }
  void Section_1e(string text)
  {
    text += "(e)  he shall be afforded every possible facility to consult a lawyer of his choice who shall\n"; 
    text += "     be permitted to make representations to the tribunal appointed for the review of the case\n"; 
    text += "     of the restricted or detained person; \n";
      t = move(text); cout<< t << endl;
  }
  void Section_1f(string text)
  {
    text += "(f) at the hearing of his case, he shall be permitted to appear in person\n";
    text += "    or by a lawyer of his choice.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_2(string text)
  {
    text += "(2) On the review by a tribunal of the case of a restricted or detained person, the tribunal\n"; 
    text += "    may order the release of the person and the payment to him of adequate compensation or\n"; 
    text += "    uphold the grounds of his restriction or detention; and the authority by which the\n";
    text += "    restriction or detention was ordered shall act accordingly.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_3(string text)
  {
    text += "(3) In every month in which there is a sitting of Parliament, a Minister of State authorised\n"; 
    text += "    by the President, shall make a report to Parliament of the number of persons restricted or\n";
    text += "    detained by virtue of such a law as is referred to in clause(10) of article 31 of this\n";
    text += "    Constitution and the number of cases in which the authority that ordered the restriction\n";
    text += "    or detention has acted in accordance with the decisions of the tribunal appointed under\n";
    text += "    this article.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_4(string text)
  {
    text += "(4) Notwithstanding clause(3) of this article, the Minister referred to in that clause shall\n";
    text += "    publish every month in the Gazette and in the media.\n\n";
      t = move(text); cout<< t << endl;
  }
  void Section_4a(string text)
  {
    text += "(a) the number and the names and addresses of the persons restricted or detained;\n";
      t = move(text); cout<< t << endl;
  }
  void Section_4b(string text)
  {
    text += "(b) the number of cases reviewed by the tribunal; and\n";
      t = move(text); cout<< t << endl;
  }
  void Section_4c(string text)
  {
    text += "(c) the number of cases in which the authority which ordered the restriction or detention has\n";
    text += "    acted in accordance with the decisions of the tribunal appointed under this article.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_5(string text)
  {
    text += "(5) For the avoidance of doubt, it is hereby declared that at the end of an emergency declared\n";
    text += "    under clause(1) of article 31 of this Constitution, a person in restriction or detention\n";
    text += "    or in custody as a result of the declaration of the emergency shall be released immediately.\n";
      t = move(text); cout<< t << endl;
  }
}

namespace Art_33
{
  uint_least16_t i = 0, ii = 0, iii = 0, iv = 0,
  v = 0, vi = 0, vii = 0, viii = 0;
  string text = "", t = "", s = "";

  void Clause_1(string text)
  {
    cout<<  "                               PROTECTION OF RIGHTS BY THE COURTS\n\n";
    text += "(1) Where a person alleges that a provision of this Constitution on the fundamental human\n"; 
    text += "    rights and freedoms has been, or is being or is likely to be contravened in relation to\n"; 
    text += "    him, then, without prejudice to any other action that is lawfully available, that person\n";
    text += "    may apply to the High Court for redress.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_2(string text)
  {
    text += "(2) The High Court may, under clause(1) of this article, issue such directions or orders or\n"; 
    text += "    writs including writs or orders in the nature of habeas corpus, certiorari, mandamus,\n"; 
    text += "    prohibition, and quo warranto as it may consider appropriate for the purposes of enforcing\n"; 
    text += "    or securing the enforcement of any of the provisions on the fundamental human rights and\n"; 
    text += "    freedoms to the protection of which the person concerned is entitled.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_3(string text)
  {
    text += "(3) A person aggrieved by a determination of the High Court may appeal to the Court of Appeal\n";
    text += "    with the right of a further appeal to the Supreme Court.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_4(string text)
  {
    text += "(4) The Rules of Court Committee may make rules of court with respect to the practice and\n";
    text += "    procedure of the Superior Courts for the purposes of this article.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_5(string text)
  {
    text += "(5) The rights, duties, declarations and guarantees relating to the fundamental human rights\n"; 
    text += "    and freedoms specifically mentioned in this Chapter shall not be regarded as excluding\n"; 
    text += "    others not specifically mentioned which are considered to be inherent in a democracy and\n"; 
    text += "    intended to secure the freedom and dignity of man.\n"; 
      t = move(text); cout<< t << endl;
  }
}

namespace Art_34
{
  uint_least16_t i = 0, ii = 0, iii = 0, iv = 0, 
  v = 0, vi = 0, vii = 0, viii;
  string text = "", t = "", s = "";

  void Clause_1(string text)
  {
    cout<<  "                                IMPLEMENTATION OF DIRECTIVE PRINCIPLES\n\n";
    text += "(1) The Directive Principles of State Policy contained in this Chapter shall guide all citizens,\n";
    text += "    Parliament, the President, the Judiciary, the Council of State, the Cabinet, political\n"; 
    text += "    parties and other bodies and persons in applying or interpreting this Constitution or any\n"; 
    text += "    other law and in taking and implementing any policy decisions, for the establishment of a\n";
    text += "    just and free society.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_2(string text)
  {
    text += "(2) The President shall report to Parliament at least once a year all the steps taken to ensure\n"; 
    text += "    the realization of the policy objectives contained in this Chapter; and, in particular, the\n"; 
    text += "    realization of basic human rights, a healthy economy, the right to work, the right to good\n"; 
    text += "    health care and the right to education.\n";
      t = move(text); cout<< t << endl;
  }
}

namespace Art_35
{
  uint_least16_t i = 0, ii = 0, iii = 0, iv = 0,
  v = 0, vi = 0 , vii = 0, viii = 0;
  string text = "", t = "", s = "";

  void Clause_1(string text)
  {
    cout<<  "                                       POLITICAL OBJECTIVES\n\n";
    text += "(1) Ghana shall be a democratic State dedicated to the realization of freedom and justice,\n"; 
    text += "    and accordingly, sovereignty resides in the people of Ghana from whom Government derives\n";
    text += "    all its powers and authority through this Constitution.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_2(string text)
  {
    text += "(2) The State shall protect and safeguard the independence, unity and territorial integrity of\n";
    text += "    Ghana, and shall seek the well-being of all her citizens.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_3(string text)
  {
    text += "(3) The State shall promote just and reasonable access by all citizens to public facilities\n"; 
    text += "    and services in accordance with law.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_4(string text)
  {
    text += "(4) The State shall cultivate among all Ghanaians respect for fundamental human rights and\n"; 
    text += "    freedoms and the dignity of the human person.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_5(string text)
  {
    text += "(5) The State shall actively promote the integration of the peoples of Ghana and prohibit\n"; 
    text += "    discrimination and prejudice on the grounds of place of origin, circumstances of birth,\n"; 
    text += "    ethnic origin, gender or religion, creed or other beliefs.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_6(string text)
  {
    text += "(6) Towards the achievement of the objectives stated in clause(5) of this article, the State\n"; 
    text += "    shall take appropriate measures to-\n\n";
      t = move(text); cout<< t << endl;
  }
  void Section_6a(string text)
  {
    text += "(a) foster a spirit of loyalty to Ghana that overrides sectional, ethnic and other loyalties;\n";
      t = move(text); cout<< t << endl;
  }
  void Section_6b(string text)
  {
    text += "(b) achieve reasonable regional and gender balance in recruitment and appointment to public\n";
    text += "    offices;\n";
      t = move(text); cout<< t << endl;
  }
  void Section_6c(string text)
  {
    text += "(c) provide adequate facilities for, and encourage, free mobility of people, goods and services\n";
    text += "    throughout Ghana;\n";
      t = move(text); cout<< t << endl;
  }
  void Section_6d(string text)
  {
    text += "(d) make democracy a reality by decentralizing the administrative and financial machinery of\n"; 
    text += "    government to the regions and districts and by affording all possible opportunities to the\n";
    text += "    people to participate in decision-making at every level in national life and in government;\n";
    text += "    and...\n";
      t = move(text); cout<< t << endl;
  }
  void Section_6e(string text)
  {
    text += "(e) ensure that whenever practicable, the headquarters of a Government or public institution\n"; //practicable ?
    text += "    offering any service is situated in an area within any region, taking into account the\n";
    text += "    resources and potentials of the region and the area.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_7(string text)
  {
    text += "(7) As far as practicable, a government shall continue and execute projects and programmes\n"; //practicable ?
    text += "    commenced by the previous Governments.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_8(string text)
  {
    text += "(8) The State shall take steps to eradicate corrupt practices and the abuse of power.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_9(string text)
  {
    text += "(9) The State shall promote among the people of Ghana the culture of political tolerance.\n";
      t = move(text); cout<< t << endl;
  }
}

namespace Art_36
{
  uint_least16_t i = 0, ii = 0, iii = 0, iv = 0,
  v = 0, vi = 0, vii = 0, viii = 0;
  string text = "", t = "", s = "";

  void Clause_1(string text)
  {
    cout<<  "                                      ECONOMIC OBJECTIVES\n\n";
    text += "(1) The State shall take all necessary action to ensure that the national economy is managed\n";
    text += "    in such a manner as to maximize the rate of economic development and to secure the maximum\n";
    text += "    welfare, freedom and happiness of every person in Ghana and to provide adequate means of\n";
    text += "    livelihood and suitable employment and public assistance to the needy.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_2(string text)
  {
    text += "(2) The State shall, in particular, take all necessary steps to establish a sound and healthy\n";
    text += "    economy whose underlying principles shall include-\n\n";
      t = move(text); cout<< t << endl;
  }
  void  Section_2a(string text)
  {
    text += "(a) the guarantee of a fair and realistic remuneration for production and productivity in order\n";
    text += "    to encourage continued production and higher productivity;\n";
      t = move(text); cout<< t << endl;
  }
  void Section_2b(string text)
  {
    text += "(b) affording ample opportunity for individual initiative and creativity in economic activities\n";
    text += "    and fostering an enabling environment for a pronounced role of the private sector in the\n";
    text += "    economy;\n";
      t = move(text); cout<< t << endl;
  }
  void Section_2c(string text)
  {
    text += "(c) ensuring that individuals and the private sector bear their share of social and national\n";
    text += "    responsibilities to contribute to the overall development of the country;\n";
      t = move(text); cout<< t << endl;
  }
  void Section_2d(string text)
  {
    text += "(d) undertaking even and balanced development of all regions and every part of each region\n";
    text += "    of Ghana, and, in particular, improving the conditions of life in the rural areas, and\n";
    text += "    generally, redressing any imbalance in development between the rural and the urban areas\n";
      t = move(text); cout<< t << endl;
  }
  void Section_2e(string text)
  {
    text += "(e) the recognition that the most secure democracy is the one that assures the basic\n";
    text += "    necessities of life for its people as a fundamental duty.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_3(string text)
  {
    text += "(3) The State shall take appropriate measures to promote the development of agriculture and\n"; // agric/indus. needs detail
    text += "    industry.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_4(string text)
  {
    text += "(4) Foreign investment shall be encouraged within Ghana, subject to any law for the time being\n"; // ...time being?
    text += "    in force regulating investment in Ghana.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_5(string text)
  {
    text += "(5) For the purposes of the foregoing clauses of this article, within two years after assuming\n";
    text += "    office, the President shall present to Parliament a co-ordinated programme of economic and\n";
    text += "    social development policies, including agriculture and industrial programmes at all levels\n";
    text += "    and in all the regions of Ghana.\n";  
      t = move(text); cout<< t << endl;
  }
  void Clause_6(string text)
  {
    text += "(6) The State shall afford equality of economic opportunity to all citizens; and, in particular,\n"; // opportunity/...ties?
    text += "    the State shall take all necessary steps so as to ensure the full integration of women into\n"; // women too?
    text += "    the mainstream of the economic development of Ghana.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_7(string text)
  {
    text += "(7) The State shall guarantee the ownership of property and the right of inheritance.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_8(string text)
  {
    text += "(8) The State shall recognise that ownership and possession of land carry a social obligation\n";
    text += "    to serve the larger community and, in particular, the State shall recognise that the\n";
    text += "    managers of public, stool, skin and family lands are fiduciaries charged with the obligation\n";
    text += "    to discharge their functions for the benefit respectively of the people of Ghana, of the\n"; 
    text += "    stool, skin, or family concerned and are accountable as fiduciaries in this regard.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_9(string text)
  {
    text += "(9) The State shall take appropriate measures needed to protect and safeguard the national\n";
    text += "    environment for posterity; and shall seek co-operation with other states and bodies for\n";
    text += "    purposes of protecting the wider international environment for mankind.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_10(string text)
  {
    text += "(10) The State shall safeguard the health, safety and welfare of all persons in employment,\n"; 
    text += "     and shall establish the basis for the full deployment of the creative potential of all\n";
    text += "     Ghanaians.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_11(string text)
  {
    text += "(11) The State shall encourage the participation of workers in the decision-making process at\n";
    text += "     the work place.\n";
      t = move(text); cout<< t << endl;
  }
}

namespace Art_37
{
  uint_least16_t i = 0, ii = 0, iii = 0, iv = 0,
  v = 0, vi = 0, vii = 0, viii = 0;
  string text = "", t = "", s = "";

  void Clause_1(string text)
  {
    cout<<  "                                     SOCIAL OBJECTIVES\n\n";
    text += "(1) The State shall endeavour to secure and protect a social order founded on the ideals\n";
    text += "    and principles of freedom, equality, justice, probity and accountability as enshrined in\n"; 
    text += "    Chapter 5 of this Constitution; and in particular, the State shall direct its policy\n"; 
    text += "    towards ensuring that every citizen has equality of rights, obligations and opportunities\n";
    text += "    before the law.\n\n";
      t = move(text); cout<< t << endl;
  }
  void Section_2a(string text)
  {
    text += "(2) The State shall enact appropriate laws to ensure-\n\n";
    text += "(a) the enjoyment of rights of effective participation in development processes including\n"; 
    text += "    rights of people to form their own associations free from state interference and to use\n"; 
    text += "    them to promote and protect their interests in relation to development processes, rights\n"; 
    text += "    of access to agencies and  officials of the State necessary in order to realise effective\n"; 
    text += "    participation in development processes; freedom to form organisations to engage in self-help\n"; 
    text += "    and income generating projects; and freedom to raise funds to support those activities;\n";
      t = move(text); cout<< t << endl;
  }
  void Section_2b(string text)
  {
    text += "(b) the protection and promotion of all other basic human rights and freedoms, including the\n";
    text += "    rights of the disabled, the aged, children and other vulnerable groups in development\n";
    text += "    processes.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_3(string text)
  {
    text += "(3) In the discharge of the obligations stated in clause(2) of this article, the State shall\n"; 
    text += "    be guided by international human rights instruments which recognize and apply particular\n"; 
    text += "    categories of basic human rights to development processes.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_4(string text)
  {
    text += "(4) The State shall maintain a population policy consistent with the aspirations and development\n"; 
    text += "    needs and objectives of Ghana.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_5(string text)
  {
    text += "(5) The State shall ensure that adequate facilities for sports are provided throughout Ghana\n"; 
    text += "    and that sports are promoted as a means of fostering national integration, health and\n";
    text += "    self-discipline as well as international friendship and understanding.\n";
      t = move(text); cout<< t << endl;
  }
  void Section_6a(string text)
  {
    text += "(6) The State shall-\n\n";
    text += "(a) ensure that contributory schemes are instituted and maintained that will guarantee economic\n";
    text += "    security for self-employed and other citizens of Ghana, and...\n";
      t = move(text); cout<< t << endl;
  }
  void Section_6b(string text)
  {
    text += "(6) The State shall-\n\n";
    text += "(b) provide social assistance to the aged such as will enable them to maintain a decent standard\n"; 
    text += "    of living.\n";
      t = move(text); cout<< t << endl;
  }
}

namespace Art_38
{
  uint_least16_t i = 0, ii = 0, iii = 0, iv = 0,
  v = 0, vi = 0, vii = 0, viii = 0;
  string text = "", t = "", s = "";

  void Clause_1(string text)
  {
    cout<<  "                                      EDUCATIONAL OBJECTIVES\n\n";
    text += "(1) The State shall provide educational facilities at all levels and in all the Regions of\n"; 
    text += "    Ghana, and shall, to the greatest extent feasible, make those facilities available to all\n";
    text += "    citizens.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_2(string text)
  {
    text += "(2) The Government shall, within two years after Parliament first meets after the coming into\n";
    text += "    force of this Constitution, draw up a programme for implementation within the following ten\n"; 
    text += "    years, for the provision of free, compulsory and universal basic education.\n";
      t = move(text); cout<< t << endl;
  }
  void Section_3a(string text)
  {
    text += "(3) The State shall, subject to the availability of resources provide-\n\n";
    text += "(a) equal and balanced access to secondary and other appropriate pre-university education,\n"; 
    text += "    equal access to university or equivalent education, with emphasis on science and technology;\n";
      t = move(text); cout<< t << endl;
  }
  void Section_3b(string text)
  {
    text += "(3) The State shall, subject to the availability of resources provide-\n\n";
    text += "(b) a free adult literacy programme, and a free vocational training, rehabilitation and\n";
    text += "    resettlement of disabled persons and...\n";
      t = move(text); cout<< t << endl;
  }
  void Section_3c(string text)
  {
    text += "(3) The State shall, subject to the availability of resources provide-\n\n";
    text += "(c) Life-long education.\n";
      t = move(text); cout<< t << endl;
  }
}

namespace Art_39
{
  uint_least16_t i = 0, ii = 0, iii = 0, iv = 0,
  v = 0, vi = 0, vii = 0, viii = 0;
  string text = "", t = "", s = "";

  void Clause_1(string text)
  {
    cout<<  "                                     CULTURAL OBJECTIVES\n\n";
    text += "(1) Subject to clause (2) of this article, the State shall take steps to encourage the\n"; 
    text += "    integration of appropriate customary values into the fabric of national life through\n";
    text += "    formal and informal education and the conscious introduction of cultural dimensions to\n";
    text += "    relevant aspects of national planning.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_2(string text)
  {
    text += "(2) The State shall ensure that appropriate customary and cultural values are adapted and\n"; 
    text += "    developed as as integral part of the growing needs of the society as a whole; and in\n"; 
    text += "    particular that traditional practices which are injurious to the health and well-being of\n";
    text += "    the person are abolished.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_3(string text)
  {
    text += "(3) The State shall foster the development of Ghanaian languages and pride in Ghanaian culture.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_4(string text)
  {
    text += "(4) The State shall endeavour to preserve and protect places of historical interest and artifacts.\n";
      t = move(text); cout<< t << endl;
  }
}

namespace Art_40
{
  uint_least16_t i = 0, ii = 0, iii = 0, iv = 0,
  v = 0, vi = 0, vii = 0, viii;
  string text = "", t = "", s = "";

  void Section_a(string text)
  {
    cout<<  "                 INTERNATIONAL RELATIONSHIP\n\n";
    text += " In its dealing with other nations, the Government shall-\n\n";
    text += "(a) promote and protect the interests of Ghana;\n";
      t = move(text); cout<< t << endl;
  }
  void Section_b(string text)
  { 
    text += " In its dealing with other nations, the Government shall-\n\n";
    text += "(b) seek the establishment of a just and equitable international economic and social order.\n";
      t = move(text); cout<< t << endl;
  }
  void Section_c(string text)
  { 
    text += " In its dealing with other nations, the Government shall-\n\n";
    text += "(c) promote respect for international law, treaty obligations and the settlement of international\n";
    text += "    disputes by peaceful means;\n";
      t = move(text); cout<< t << endl;
  }
  void Section_d(string text)
  { 
    text += " In its dealing with other nations, the Government shall-\n\n";
    text += "(d) adhere to the principles enshrined in or as the case may be, the aims and ideals of-\n\n";
      t = move(text); cout<< t << endl;
  }
  void Paragraph_i(string text)
  { 
    text += "(i) the Charter of the United Nations;\n";
      t = move(text); cout<< t << endl;
  }
  void Paragraph_ii(string text)
  {
    text += "(ii) the Charter of the Organisation of African Unity;\n";
      t = move(text); cout<< t << endl;
  }
  void Paragraph_iii(string text)
  { 
    text += "(iii) the Commonwealth;\n";
      t = move(text); cout<< t << endl;
  }
  void Paragraph_iv(string text)
  { 
    text += "(iv) the treaty of the Economic Community of West African States; and..\n";
      t = move(text); cout<< t << endl;
  }
  void Paragraph_v(string text)
  { 
    text += "(v) any other international organisation of which Ghana is a member.\n";
      t = move(text); cout<< t << endl;
  }
}

namespace Art_41
{
  uint_least16_t i = 0, ii = 0, iii = 0, iv = 0,
  v = 0, vi = 0, vii = 0, viii = 0;
  string text = "", t = "", s = "";

  void Section_a(string text)
  {
    cout<< "                                      DUTIES OF A CITIZEN\n\n";
    text += " The exercise and enjoyment of rights and freedoms is inseparable from the performance of\n"; 
    text += " duties and obligations, and accordingly, it shall be the duty of every citizen-\n\n";
    text += "(a) to promote the prestige and good name of Ghana and respect the symboles of the nation;\n";
      t = move(text); cout<< t << endl;
  }
  void Section_b(string text)
  {
    text += " The exercise and enjoyment of rights and freedoms is inseparable from the performance of\n"; 
    text += " duties and obligations, and accordingly, it shall be the duty of every citizen-\n\n";
    text += "(b) to uphold and defend this Constitution and the law;\n";
      t = move(text); cout<< t << endl;
  }
  void Section_c(string text)
  {
    text += " The exercise and enjoyment of rights and freedoms is inseparable from the performance of\n"; 
    text += " duties and obligations, and accordingly, it shall be the duty of every citizen-\n\n";
    text += "(c) to foster national unity and live in harmony with others;\n";
      t = move(text); cout<< t << endl;
  }
  void Section_d(string text)
  {
    text += " The exercise and enjoyment of rights and freedoms is inseparable from the performance of\n"; 
    text += " duties and obligations, and accordingly, it shall be the duty of every citizen-\n\n";
    text += "(d) to respect the rights, freedoms and legitimate interests of others, and generally to\n"; 
    text += "    refrain from doing acts detrimental to the welfare of other persons;\n";
      t = move(text); cout<< t << endl;
  }
  void Section_e(string text)
  {
    text += " The exercise and enjoyment of rights and freedoms is inseparable from the performance of\n";
    text += " duties and obligations, and accordingly, it shall be the duty of every citizen-\n\n";
    text += "(e) to work conscientiously in his lawfully chosen occupation;\n";
      t = move(text); cout<< t << endl;
  }
  void Section_f(string text)
  {
    text += " The exercise and enjoyment of rights and freedoms is inseparable from the performance of\n"; 
    text += " duties and obligations, and accordingly, it shall be the duty of every citizen-\n\n";
    text += "(f) to respect and preserve public property and expose and combat misuse and waste of public\n"; 
    text += "    funds and property;";
      t = move(text); cout<< t << endl;
  }
  void Section_g(string text)
  {
    text += " The exercise and enjoyment of rights and freedoms is inseparable from the performance of\n"; 
    text += " duties and obligations, and accordingly, it shall be the duty of every citizen-\n\n";
    text += "(g) to contribute to the well-being of the community where that citizen lives;\n";
      t = move(text); cout<< t << endl;
  }
  void Section_h(string text)
  {
    text += " The exercise and enjoyment of rights and freedoms is inseparable from the performance of\n"; 
    text += " duties and obligations, and accordingly, it shall be the duty of every citizen-\n\n";
    text += "(h) to defend Ghana and render national service when necessary;\n";
      t = move(text); cout<< t << endl;
  }
  void Section_i(string text)
  {
    text += " The exercise and enjoyment of rights and freedoms is inseparable from the performance of\n"; 
    text += " duties and obligations, and accordingly, it shall be the duty of every citizen-\n\n";
    text += "(i) to co-operate with lawful agencies in the maintainance of law and order\n";
      t = move(text); cout<< t << endl;
  }
  void Section_j(string text)
  {
    text += " The exercise and enjoyment of rights and freedoms is inseparable from the performance of\n"; 
    text += " duties and obligations, and accordingly, it shall be the duty of every citizen-\n\n";
    text += "(j) to declare his income honestly to the appropriate and lawful agencies and to satisfy all\n"; 
    text += "    tax obligations; and...\n";
      t = move(text); cout<< t << endl;
  }
  void Section_k(string text)
  {
    text += " The exercise and enjoyment of rights and freedoms is inseparable from the performance of\n"; 
    text += " duties and obligations, and accordingly, it shall be the duty of every citizen-\n\n";
    text += "(k) to protect and safeguard the environment.\n";
      t = move(text); cout<< t << endl;
  }
}

namespace Art_42
{
  uint_least16_t i = 0, ii = 0, iii = 0, iv = 0,
  v = 0, vi = 0, vii = 0, viii = 0;
  string text = "", t = "", s = "";

  void Article_42(string text)
  {
    cout<< "                                       RIGHT TO VOTE\n\n";
    text += "(42) Every citizen of Ghana of eighteen years of age or above and of sound mind has the right\n";
    text += "     to vote and is entitled to be registered as a voter for the purpose of public elections\n";
    text += "     and referenda.\n";
      t = move(text); cout<< t << endl;
  }
}

namespace Art_43
{
  uint_least16_t i = 0, ii = 0, iii = 0, iv = 0,
  v = 0, vi = 0, vii = 0, viii = 0;
  string text = "", t = "", s = "";

  void Section_1a(string text)
  {
    cout<< "                    ELECTORAL COMMISSION\n\n";
    text += "(1) There shall be an Electoral Commission which shall consist of-\n\n";
    text += "(a) a Chairman;\n";
      t = move(text); cout<< t << endl;
  }
  void Section_1b(string text)
  {
    text += "(1) There shall be an Electoral Commission which shall consist of-\n\n";
    text += "(b) two Deputy Chairmen; and...\n";
      t = move(text); cout<< t << endl;
  }
  void Section_1c(string text)
  {
    text += "(1) There shall be an Electoral Commission which shall consist of-\n\n";
    text += "(c) four other members.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_2(string text)
  {
    text += "(2) The members of the Electoral Commission shall be appointed by the President\n";
    text += "    under article 70 of this Constitution.\n";
      t = move(text); cout<< t << endl;
  }
}

namespace Art_44
{
  uint_least16_t i = 0, ii = 0, iii = 0, iv = 0,
  v = 0, vi = 0, vii = 0, viii = 0;
  string text = "", t = "", s = "";

  void Clause_1(string text)
  {
    cout<< "                 QUALIFICATIONS, TERMS AND CONDITIONS OF SERVICE\n";
    cout<< "                       OF MEMBERS OF ELECTORAL COMMISSION\n\n";
    text += "(1) A person is not qualified to be appointed a member of the Electoral Commission unless\n";
    text += "    he is qualified to be elected as a member of Parliament.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_2(string text)
  {
    text += "(2) The Chairman of the Electoral Commission shall have the same terms and conditions of\n"; 
    text += "    service as a Justice of the Court of Appeal.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_3(string text)
  {
    text += "(3) The two Deputy Chairmen of the Commission shall have the same terms and conditions of\n";
    text += "    service as are applicable to a Justice of the High Court.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_4(string text)
  {
    text += "(4) The Chairman and the two Deputy Chairmen of the Commission shall not, while they hold\n";
    text += "    office on the Commission, hold any other public office.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_5(string text)
  {
    text += "(5) The other four members of the Commission shall be paid such allowances as Parliament\n";
    text += "    may determine.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_6(string text)
  {
    text += "(6) If a member is absent or dies, the Commission shall continue its work until the\n";
    text += "    President, acting on the advice of the Council of State, appoints a qualified person\n";
    text += "    to fill the vacancy.\n";
      t = move(text); cout<< t << endl;
  }
}

namespace Art_45
{
  uint_least16_t i = 0, ii = 0, iii = 0, iv = 0,
  v = 0, vi = 0, vii = 0, viii = 0;
  string text = "", t = "", s = "";

  void Article_45a(string text)
  {
    cout<< "                   FUNCTIONS OF ELECTORAL COMMISSION\n\n";
    text += "    The Electoral Commission shall have the following functions-\n\n";
    text += "(a) to compile the register of voters and revise it at such periods as may be determined\n";
    text += "    by law;\n";
      t = move(text); cout<< t << endl;
  }
  void Article_45b(string text)
  {
    text += "    The Electoral Commission shall have the following functions-\n\n";
    text += "(b) to determine the electoral boundaries for both national and local government elections;\n";
      t = move(text); cout<< t << endl;
  }
  void Article_45c(string text)
  {
    text += "    The Electoral Commission shall have the following functions-\n\n";
    text += "(c) to conduct and supervise all public elections and referenda;\n";
      t = move(text); cout<< t << endl;
  }
  void Article_45d(string text)
  {
    text += "    The Electoral Commission shall have the following functions-\n\n";
    text += "(d) to educate the people on the electoral process and its purpose;\n";
      t = move(text); cout<< t << endl;
  }
  void Article_45e(string text)
  {
    text += "    The Electoral Commission shall have the following functions-\n\n";
    text += "(e) to undertake programmes for the expansion of the registration of voters; and...\n";
      t = move(text); cout<< t << endl;
  }
  void Article_45f(string text)
  {
    text += "    The Electoral Commission shall have the following functions-\n\n";
    text += "(f) to perform such other functions as may be prescribed by law.\n";
      t = move(text); cout<< t << endl;
  }
}

namespace Art_46
{
  uint_least16_t i = 0, ii = 0, iii = 0 , iv = 0,
  v= 0, vi = 0, vii = 0, viii = 0;
  string text = "", t = "", s = "";

  void Article_46(string text)
  {
    cout<< "                              INDEPENDENCE OF THE COMMISSION\n\n";
    text += "(46) Except as provided in this Constitution or in any other law not inconsistent with this\n";
    text += "     Constitution, in the performance of its functions, the Electoral Commission, shall not\n";
    text += "     be subject to the direction or control of any person or authority.\n";
      t = move(text); cout<< t << endl;
  }
}

namespace Art_47
{
  uint_least16_t i = 0, ii = 0, iii = 0 , iv = 0,
  v = 0, vi = 0, vii = 0, viii = 0;
  string text = "", t = "", s = "";

  void Clause_1(string text)
  {
    cout<< "                                        CONSTITUENCIES\n\n";
    text += "(1) Ghana shall be devided into as many constituencies for the purpose of election of members\n";
    text += "    of Parliament as the Electoral Commission may prescribe, and each constituency shall be\n";
    text += "    represented by one member of Parliament.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_2(string text)
  {
    text += "(2) No constituency shall fall within more than one region.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_3(string text)
  {
    text += "(3) The boundaries of each constituency shall be such that the number of inhabitants in the\n";
    text += "    constituency is, as nearly as possible, equal to the population quota.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_4(string text)
  {
    text += "(4) For the purpose of clause (3) of this article, the number of inhabitants of a constituency\n";
    text += "    may be greater than or less than the population quota in order to take account of means of\n";
    text += "    communication, geographical features, density of population and area and boundaries of the\n";
    text += "    regions and other administrative or traditional areas.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_5(string text)
  {
    text += "(5) The Electoral Commission shall review the division of Ghana into constituencies at intervals\n";
    text += "    of not less than seven years, or within twelve months after the publication of the\n";
    text += "    enumeration figures after the holding of a census of the population of Ghana, whichever\n";
    text += "    is earlier, and may, as a result, alter the constituencies.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_6(string text)
  {
    text += "(6) Where the boundaries of a constituency established under this article are altered as a\n";
    text += "    result of a review, the alteration shall come into effect upon the next dissolution of\n";
    text += "    Parliament.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_7(string text)
  {
    text += "(7) For the purposes of this article, \"population quota\" means the number obtained by\n";
    text += "    dividing the number of inhabitants of Ghana by the number of constituencies into which\n";
    text += "    Ghana is divided under this article.\n";
      t = move(text); cout<< t << endl;
  }
}

namespace Art_48
{
  uint_least16_t i = 0, ii = 0, iii = 0, iv = 0,
  v = 0, vi = 0, vii = 0, viii = 0;
  string text = "", t = "", s = "";

  void Clause_1(string text)
  {
    cout<< "                             APPEALS FROM DECISIONS OF COMMISSION\n\n";
    text += "(1) A person aggrieved by a decision of the Electoral Commission in respect of a demarcation\n";
    text += "    of a boundary, may appeal to a tribunal consisting of three persons appointed by the Chief\n";
    text += "    Justice and the Electoral Commission shall give effect to the decision of the tribunal.\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_2(string text)
  {
    text += "(2) A person aggrieved by a decision of the tribunal referred to in clause (1) of this\n";
    text += "    article may appeal to the Court of Appeal whose decision on the matter shall be final.\n";
      t = move(text); cout<< t << endl;
  }
}

namespace Art_49
{
  uint_least16_t i = 0, ii = 0, iii = 0, iv = 0,
  v = 0, vi = 0, vii = 0, viii = 0;
  string text = "", t = "", s = "";

  void Clause_1(string text)
  {
    cout<< "       VOTING AT ELECTIONS AND REFERENDA\n\n";
    text += "(1) \n";
      t = move(text); cout<< t << endl;
  }
  void Clause_2(string text)
  {
    text += "(2) \n";
      t = move(text); cout<< t << endl;
  }
  void Clause_3(string text)
  {
    text += "(3) \n";
      t = move(text); cout<< t << endl;
  }
  void Clause_4(string text)
  {
    text += "(4) \n";
      t = move(text); cout<< t << endl;
  }
}

namespace Art_50
{
  uint_least16_t i = 0, ii = 0, iii = 0, iv = 0,
  v = 0, vi = 0, vii = 0, viii = 0;
  string text = "", t = "", s = "";
}
