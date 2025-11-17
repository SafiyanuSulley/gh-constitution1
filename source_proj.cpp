#include "/Users/safiyanusulley/projects/include_project/header_proj.hpp"
#include<iostream>
#include<string>
#include<limits>

using namespace std;
namespace Art_1
{
   uint_least16_t i = 0, ii = 0, iii = 0, iv = 0,
   v = 0, vi = 0, vii = 0, viii = 0;
   string text = "", t = "", s = "";
    
    void Clause_1(string text)
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
        t = move(text); cout<< t << endl;;
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
      text += "    attempts to do any such act; or\n";
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
    cout<< "                                  TERRITORIES OF GHANA\n\n";
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
    cout<< "             CREATION, ALTERATION AND MERGER OF REGIONS\n\n";
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
    cout<< "                         CITIZENSHIP OF GHANA\n\n";
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
  string text = "", t = "", s = "", article = "";

  void Clause_1(string text)
  {
    cout<< "                      PERSONS ENTITLED TO BE REGISTERED AS CITIZENS\n\n";
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
  string text = "", t = "", s = "", article;
  
  void Clause_1(string text)
  {
    cout<< "                     DUAL CITIZENSHIP\n\n";
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
  string text = "", t = "", s = "", article = "";

  void Clause_1(string text)
  {
    cout<< "                             CITIZENSHIP LAWS BY PARLIAMENT\n\n";
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
    text += "    on the ground.\n\n";
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
  string text = "", t = "", s = "", article = "";

  void Clause_1(string text)
  {
    cout<< "                                       INTERPRETATION\n\n";
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
  string text = "", t = "", s = "", article = "";

  void Section_1a(string text)
  { cout<< "              THE LAWS OF GHANA\n\n";
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
    text += "(b) be published in the Gazette on the day it is laid before Parliament; and\n";
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
  string text = "", t = "", s = "", article = "";

  void Clause_1(string text)
  {
    cout<< "                              PROTECTION OF FUNDAMENTAL HUMAN\n";
    cout<< "                                    RIGHTS AND FREEDOMS\n\n";
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
  string text = "", t = "", s = "", article = "";

  void Clause_1(string text)
  {
    cout<< "                                 PROTECTION OF RIGHT TO LIFE\n\n";
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
  string text = "", t = "", s = "", article = "";

  void Clause_1(string text)
  {
    cout<< "                            PROTECTION OF PERSONAL LIBERTY\n\n";
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
    text += "    Ghana or for the puepose of restricting that person while he is being lawfully\n";
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
  void Section_3a(string text) // no sections for practicability
  {
    text += "(3) A person who is arrested, restricted or detained-\n\n";
    text += "(a) for the purpose of bringing him before a court in execution\n";
    text += "    of an order of a court; or\n";
      t = move(text); cout<< t << endl;
  }
  void Section_3b(string text)
  {
    text += "(3) A person who is arrested, restricted or detained-\n\n";
    text += "(b) upon reasonable suspicion of his having committed or being about to commit\n"; 
    text += "    a criminal offence under the laws of Ghana, and who is not released,\n";
      t = move(text); cout<< t << endl;
  }
  void Clause_3bis(string text)
  {
    text += "(3bis) shall be brought before a court within forty-eight hours after the arrest,\n";
    text += "       restriction or detention.\n";
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
  string text = "", t = "", s = "", article = "";

  void Clause_1(string text)
  {
    cout<< "                 RESPECT FOR HUMAN DIGNITY\n\n";
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
  string text = "", t = "", s = "", article = "";

  void Clause_1(string text)
  {
    cout<< "         PROTECTION FROM SLAVERY AND FORCED LABOUR\n\n";
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
    text += "(a) any labour required as a result of a sentence or order of a court; or\n";
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
    text += "    arising or existing during that period for the purposes of dealing with the situation; or\n";
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
  string text = "", t = "", s = "", article = "";

  void Clause_1(string text)
  {
    cout<< "      EQUALITY AND FREEDOM FROM DISCRIMINATION\n\n";
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
  string text = "", t = "", s = "", article = "";

  void Clause_1(string text)
  {
    cout<< "        PROTECTION OF PRIVACY OF HOME AND OTHER PROPERTY\n\n";
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
  string text = "", t = "", s = "", article = "";

  void Clause_1(string text)
  {
    cout<< "                          FAIR TRIAL\n\n";
    text += "(1) A person charged with a criminal offence shall be given\n";
    text += "    a fair hearing within a reasonable time by a court.\n";
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
    text += "    his presence after he has been duly notified of the trial; or\n";
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
    text += "    facts; or\n";
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
    text += "     or conspiring with any person to levy war against Ghana; or\n";
      t = move(text); cout<< t << endl;
  }
  void Section_17b(string text)
  {
    text += "(17) Subject to clause(18) of this article, treason shall consist only-\n\n";
    text += " (b) in attempting by force of arms or other violent means to overthrow the organs of\n";
    text += "     government established by or under this Constitution; or\n";
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
