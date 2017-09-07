#include <iostream>
#include <string>
int main()
{
    std::string text = "(Varovanie: v tomto texte sa nenachadza diakritika, pretoze mi prestala fungovat moja slovenska klavesnica\n\
        a mal som v skrini uz len anglicku)\n\
        Toto je rozpravka o jednej malej zabke.\n\
        Kde bolo tam bolo, bola raz jedna zabka. No nebola to kdejaka zabka, oh, to vobec nie. Tato zabka mala aj\n\
        meno! A jej meno nebolo nic ine, nez Zaba.\n\
        Maly Zaba si spokojne nazival vo svojom informatickom jazierku. Bolo mu tam dobre, obtazoval ho niekto\n\
        len sem-tam a v ine dni mohol v klude programovat ulohy z programka. Jedneho pekneho dna ale jazierko\n\
        zacalo vysychat. Vsetky zubrienky zmatene behali a plavali po jazierku: “Co budeme robit, co budeme robit,\n\
        toto je nas koniec!!!” vykrikovali dnom aj nocou. Jedneho dna si Zaba povedal: “A dost, idem zistit, preco nase\n\
        jazierko vysycha, pretoze v takomto prostredi sa vobec neda pracovat!”. Zbalil si teda svoj batoh s notebookom\n\
        a desiatou a vybral sa na svoje prve dobrodruzstvo. No hned, ako doplaval na kraj jazierka, si uvedomil, ze\n\
        vlastne sa este nenaucil poriadne chodit. “A co teraz? Budem sa asi predsa len musiet naucit chodit. Vzdy som\n\
        si myslel, ze to nebude treba, ale je to raz tak, nohy su ako perzistentny intervalac, nikdy nevies, kedy ich budes\n\
        potrebovat”.\n\
        Ako tam tak Zaba stal, isla okolo miestna ropusska jezibaba. “Ahoj Zabka, co ty tu tak smutne na kraji\n\
        jazierka?” spytala sa ho. “Ale viete tetuska, chcel som ist zachranit nase vysychajuce jazierko, ale zabudol som\n\
        na to, ze vlastne neviem chodit na svojich nozkach a teda nemozem opustit nase jazierko,” odpovedal Zaba\n\
        zronene. “Ah, len to moje male? Na to mam ja jednoduche riesenie zlatko. Poznam take zaklinadlo z Kuzelneho\n\
        Sadzobniku Priani, ktore ti urychli rast tvojich zabacich noziciek. So silnymi nohami sa ti urcite bude chodit\n\
        lepsie.” “A vedeli by ste ho na mna pouzit tetuska?” “Ale samozrejme, ze sa pytas. Len ked budes mat nabuduce\n\
        cestu okolo mojho domu, prines mi z tych vybornych buchiet, co robieva tvoja mamicka.” “Samozrejme tetuska,\n\
        prinesiem,” povedal Zaba nadsene. “Dobre teda, postav sa sem a chvilku pockaj dokedy vykonam cele zaklinadlo.\n\
        Urcite sa neboj, viem, co robim”.\n\
        A ako povedala, tak aj urobila. Nasledujuce 2 hodiny, 31 minut a 47 sekund dookola citala nasledujucu\n\
        kuzelnu formulku:\n\
        Dexempo cirkumplex! Dexempo cirkumplex! Dexempo cirkumplex! (dalej si domyslite sami)\n\
        Akonahle jezibaba docitala formulku, Zaba zacal citit divny pocit v podbrusku. “Co sa to so mnou deje\n\
        tetuska!?” spytal sa Zaba vydesene. “Neboj sa, to ti len rastu nohy, o chvilku to bude.” A stalo sa tak rychlejsie,\n\
        ako by Zaba stihol vyriesit lahku grafovu ulohu.\n\
        Zabka podakoval jezibabe a vyskocil von z jazierka. Akonahle ale vyskocil na sus, ostal zarazeny. “Este nikdy\n\
        som na vlastne oci nevidel sus, len som o nej cital. Tolko zaujimavych kvetov a stromov tu rastie, nie ako nas\n\
        jeden druh rias v jazierku. Nesmiem ale otalat, inak sa jazierko cele vysusi!”. Zacal sa teda prechadzat okolo\n\
        jazierka a tam zrazu uvidel, ze rieka Kofolka, ktora normalne vteka do jazierka je zatarasena odpadkami od deti\n\
        z posledneho skolskeho vyletu. “Musim tu nechat cedulky aby vedeli, ze to nemozu robit.” povedal si. A ako\n\
        povedal, tak aj spravil. Hned po tom, ako vyhodil smeti blokujuce prud rieky, vytlacil nove cedulky s napismi\n\
        ako “Odpadky patria do kosa.” a “Vazte si nasu prirodu, mame len jednu”.\n\
        A ked sa Zabka vratil do svojho jazierka, vsetci ho oslavovali ako hrdinu, ktorym aj bol. Starosta Misof mu\n\
        udelil cestny magistrat za jeho verejnosti-prospesne hrdinstvo. A co nas mily Zaba? To je predsa samozrejme!\n\
        Akonahle sa stratil zdroj vsetkeho vyrusovania, v klude pokracoval v praci, az pokym neprisiel dalsi deadline.";
    int vowels = 0;
    for (int i = 0; i < text.length(); ++i)
    {
        char a = tolower(text[i]);
        if (a == 'i' || a == 'o' || a == 'y') // i o y
            ++vowels;
        else if (a == 'a' || a == 'e' || a == 'u')
            if (text[i - 1] != 'i') //--(ia ie iu)
                ++vowels;
            else
                --vowels;
    }
    std::cout << vowels << '\n';
    return 0;
}