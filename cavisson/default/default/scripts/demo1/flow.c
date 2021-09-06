/*-----------------------------------------------------------------------------
    Name: flow
    Recorded By: cavisson
    Date of recording: 09/01/2021 01:46:20
    Flow details:
    Build details: 4.6.1 (build# 55)
    Modification History:
-----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

void flow()
{
    ns_start_transaction("index");
    ns_web_url ("index",
        "URL=http://blazedemo.com/",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        "REDIRECT=YES",
        "LOCATION=https://blazedemo.com/",
        INLINE_URLS,
            "URL=https://blazedemo.com/", "HEADER=Upgrade-Insecure-Requests:1", "HEADER=Sec-Fetch-Site:none", "HEADER=Sec-Fetch-Mode:navigate", "HEADER=Sec-Fetch-User:?1", "HEADER=Sec-Fetch-Dest:document", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://blazedemo.com/assets/bootstrap.min.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://blazedemo.com/assets/bootstrap-table.js", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:script", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://blazedemo.com/assets/bootstrap.min.css", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:style", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://blazedemo.com/assets/bootstrap-table.css", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:style", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("index", NS_AUTO_STATUS);
    ns_page_think_time(9.025);

    //Page Auto split for Button 'Find Flights' Clicked by User
    ns_start_transaction("reserve_php");
    ns_web_url ("reserve_php",
        "URL=https://blazedemo.com/reserve.php",
        "METHOD=POST",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Origin:https://blazedemo.com",
        "HEADER=Content-Type:application/x-www-form-urlencoded",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:navigate",
        "HEADER=Sec-Fetch-User:?1",
        "HEADER=Sec-Fetch-Dest:document",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        BODY_BEGIN,
            "[key: "fromPort"
value: "Paris"
, key: "toPort"
value: "London"
]",
        BODY_END,
        INLINE_URLS,
            "URL=https://blazedemo.com/assets/bootstrap.min.css", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:style", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=https://blazedemo.com/assets/bootstrap-table.css", "HEADER=sec-ch-ua:\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\"", "HEADER=sec-ch-ua-mobile:?0", "HEADER=Sec-Fetch-Site:same-origin", "HEADER=Sec-Fetch-Mode:no-cors", "HEADER=Sec-Fetch-Dest:style", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("reserve_php", NS_AUTO_STATUS);
    ns_page_think_time(3.664);

    //Page Auto split for Button 'Choose This Flight' Clicked by User
    ns_start_transaction("purchase_php");
    ns_web_url ("purchase_php",
        "URL=https://blazedemo.com/purchase.php",
        "METHOD=POST",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Origin:https://blazedemo.com",
        "HEADER=Content-Type:application/x-www-form-urlencoded",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:navigate",
        "HEADER=Sec-Fetch-User:?1",
        "HEADER=Sec-Fetch-Dest:document",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        BODY_BEGIN,
            "[key: "flight"
value: "12"
, key: "price"
value: "765.32"
, key: "airline"
value: "Virgin America"
, key: "fromPort"
value: "Paris"
, key: "toPort"
value: "London"
]",
        BODY_END
    );

    ns_end_transaction("purchase_php", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("json");
    ns_web_url ("json",
        "URL=https://update.googleapis.com/service/update2/json?cup2key=10:301478020&cup2hreq=1762d29cf9e6c748137a6f447384d3b4a1e252bd183a62fbdab731458d64f339",
        "METHOD=POST",
        "HEADER=X-Goog-Update-AppId:pdafiollngonhoadbmdoemagnfpdphbe,obedbbhbpmojnkanicioggnmelmoomoc,ojhpjlocmbogdgmfpkhlaaeamibhnphh,llkgjffcdpffmhiakmfcdcblohccpfmo,jflookgnkcckhobaglndicnbbgbonegd,khaoiebndkojlmppeemjhbpbandiljpe,giekcmmlnklenlaomppkphknjmnnpneh,ggkkehgbnfjpeggfpleeakpidbkibbmn,hfnkpimlhhgieaddgfemjhofmfblmnib,gcmjkmgdlgnkkcocmoeiminaijmmjnii,aemomkdncapdnfajjbbcbdebjljbpmpj,jamhcnnkihinmdlkakkaopbjbbcngflc,cmahhnpholdijhjokonmfdjbfmklppij,oimompecagnajdejgnnjijobebaeigek,eeigpngbgcognadeebkilcpcaedhellh",
        "HEADER=X-Goog-Update-Interactivity:bg",
        "HEADER=X-Goog-Update-Updater:chromium-90.0.4430.93",
        "HEADER=Content-Type:application/json",
        "HEADER=Sec-Fetch-Site:none",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        BODY_BEGIN,
            "{"request":{"@os":"win","@updater":"chromium","acceptformat":"crx2,crx3","app":[{"appid":"pdafiollngonhoadbmdoemagnfpdphbe","cohort":"1:vz3:","cohorthint":"Auto","cohortname":"Auto","enabled":true,"ping":{"ping_freshness":"{f63cb656-1cd6-4ac7-99af-184fd360c134}","rd":5356},"updatecheck":{},"version":"0.0.0.0"},{"accept_locale":"ENUS","appid":"obedbbhbpmojnkanicioggnmelmoomoc","cohort":"1:s6f:","cohorthint":"Auto","cohortname":"Auto","enabled":true,"packages":{"package":[{"fp":"1.47b2ab949538dd83ed2b59a3f3feffafb559b55d62a1cd377895a03024c68641"}]},"ping":{"ping_freshness":"{3ddde9d3-75e6-4999-a5fe-4c418dab48b8}","rd":5356},"updatecheck":{},"version":"20210817.392344495"},{"appid":"ojhpjlocmbogdgmfpkhlaaeamibhnphh","cohort":"1:w0x:","cohorthint":"Auto","cohortname":"Auto","enabled":true,"packages":{"package":[{"fp":"1.478aa915e78878e332a0b4bb4d2a6fb67ff1c7f7b62fe906f47095ba5ae112d0"}]},"ping":{"ping_freshness":"{8d5e03ac-71b6-4e35-8527-d503e7053875}","rd":5356},"updatecheck":{},"version":"1"},{"appid":"llkgjffcdpffmhiakmfcdcblohccpfmo","cohort":"1::","enabled":true,"ping":{"ping_freshness":"{2d3dd9cc-344e-43b0-b030-c28ca6fc1a50}","rd":5356},"updatecheck":{},"version":"0.0.0.0"},{"appid":"jflookgnkcckhobaglndicnbbgbonegd","cohort":"1:s7x:","cohorthint":"Auto","cohortname":"Auto","enabled":true,"packages":{"package":[{"fp":"1.da10ad9f0308e22b48f54d0018aa0ef85c0fa3c30cc5302789bf30b78a301541"}]},"ping":{"ping_freshness":"{cffdbb7c-d935-4f4c-9885-0cd152750b9c}","rd":5356},"updatecheck":{},"version":"2685"},{"appid":"khaoiebndkojlmppeemjhbpbandiljpe","cohort":"1:cux:","cohorthint":"Auto","cohortname":"Auto","enabled":true,"packages":{"package":[{"fp":"1.ffd1d2d75a8183b0a1081bd03a7ce1d140fded7a9fb52cf3ae864cd4d408ceb4"}]},"ping":{"ping_freshness":"{c888c01d-8980-442e-b075-e56254494ce6}","rd":5356},"updatecheck":{},"version":"43"},{"appid":"giekcmmlnklenlaomppkphknjmnnpneh","cohort":"1:j5l:","cohorthint":"Auto","cohortname":"Auto","enabled":true,"packages":{"package":[{"fp":"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace"}]},"ping":{"ping_freshness":"{80c11427-ac39-4dac-a448-57dfea4b6fa4}","rd":5356},"updatecheck":{},"version":"7"},{"appid":"ggkkehgbnfjpeggfpleeakpidbkibbmn","cohort":"1:ut9:","cohorthint":"M80ToM99","cohortname":"M80ToM99","enabled":true,"packages":{"package":[{"fp":"1.0dc23b37d1fa49e00e0a208bfcb91839be99b9e85162814b05987c2eba1b3701"}]},"ping":{"ping_freshness":"{a1bba11b-d646-4492-8ada-3ce9ab4ab6c7}","rd":5356},"updatecheck":{},"version":"2021.8.23.1140"},{"appid":"hfnkpimlhhgieaddgfemjhofmfblmnib","cohort":"1:jcl:","cohorthint":"Auto","cohortname":"Auto","enabled":true,"packages":{"package":[{"fp":"1.f6777f52bdcb6a7c5e34dbf74cad4e839d5ae0bd6a0fc67b608e0e387099554c"}]},"ping":{"ping_freshness":"{0d50d84e-0858-4ad1-8184-2bc5fd491957}","rd":5356},"updatecheck":{},"version":"6816"},{"appid":"gcmjkmgdlgnkkcocmoeiminaijmmjnii","cohort":"1:bm1:","cohorthint":"M54ToM99","cohortname":"M54ToM99","enabled":true,"packages":{"package":[{"fp":"1.b45fc5f3479dc7b07e8e5822a11785819b7f1c249c9b47dcffcb28edbbc2d706"}]},"ping":{"ping_freshness":"{e61cbacf-df2c-456a-9556-921d5b872b07}","rd":5356},"updatecheck":{},"version":"9.29.4"},{"appid":"aemomkdncapdnfajjbbcbdebjljbpmpj","cohort":"1::","enabled":true,"packages":{"package":[{"fp":"1.c25787c5c76ff9c4c50a87d32802301c9ed80d934830d677bbc6629e290cb5aa"}]},"ping":{"ping_freshness":"{07192b5c-0f0d-4982-a1ef-939046cf907f}","rd":5356},"updatecheck":{},"version":"1.0.6.0"},{"appid":"jamhcnnkihinmdlkakkaopbjbbcngflc","cohort":"1:wvr:","cohorthint":"Auto","cohortname":"Auto","enabled":true,"packages":{"package":[{"fp":"1.2a15a17f022bc34e5985d705d39c7beb658c8cdcc250964838fa0d0d9be8e2eb"}]},"ping":{"ping_freshness":"{5d9d7246-d867-4ba6-bd20-22ff97701297}","rd":5356},"updatecheck":{},"version":"95.0.4623.2"},{"appid":"cmahhnpholdijhjokonmfdjbfmklppij","cohort":"1:wr3:","cohorthint":"Auto","cohortname":"Auto","enabled":true,"packages":{"package":[{"fp":"1.b4ddbdce4f8d5c080328aa34c19cb533f2eedec580b5d97dc14f74935e4756b7"}]},"ping":{"ping_freshness":"{49f2a877-3b17-47c1-a8c6-1961c58d2689}","rd":5356},"updatecheck":{},"version":"1.0.6"},{"appid":"oimompecagnajdejgnnjijobebaeigek","cohort":"1::","enabled":true,"packages":{"package":[{"fp":"1.0727b38159b38ffa3633510444ece15c86417962e8cac59c59002f13b50239ac"}]},"ping":{"ping_freshness":"{0bb6a4f5-4a4a-4a09-ab51-a500ee67962b}","rd":5356},"updatecheck":{},"version":"4.10.2209.0"},{"appid":"eeigpngbgcognadeebkilcpcaedhellh","cohort":"1:w59:","cohorthint":"Auto","cohortname":"Auto","enabled":true,"packages":{"package":[{"fp":"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05"}]},"ping":{"ping_freshness":"{1365a7ea-3788-4811-b104-db53f7756db6}","rd":5356},"updatecheck":{},"version":"2020.11.2.164946"}],"arch":"x64","dedup":"cr","domainjoined":false,"hw":{"physmemory":8},"lang":"en-US","nacl_arch":"x86-64","os":{"arch":"x86_64","platform":"Windows","version":"10.0.18363.1734"},"prodversion":"90.0.4430.93","protocol":"3.1","requestid":"{bed76620-b203-4853-8fd0-940f151e8760}","sessionid":"{846b5710-80aa-44fc-9bad-b6673c26971d}","updaterversion":"90.0.4430.93"}}",
        BODY_END
    );

    ns_end_transaction("json", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("json_2");
    ns_web_url ("json_2",
        "URL=https://update.googleapis.com/service/update2/json",
        "METHOD=POST",
        "HEADER=Content-Type:application/json",
        "HEADER=Sec-Fetch-Site:none",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        BODY_BEGIN,
            "{"request":{"@os":"win","@updater":"chromium","acceptformat":"crx2,crx3","app":[{"appid":"pdafiollngonhoadbmdoemagnfpdphbe","event":[{"download_time_ms":14316,"downloaded":12374,"downloader":"bits","eventresult":1,"eventtype":14,"nextversion":"2021.8.17.1300","previousversion":"0.0.0.0","total":12374,"url":"http://edgedl.me.gvt1.com/edgedl/release2/chrome_component/ccqwc52cyybdcncouijnt6kpaq_2021.8.17.1300/pdafiollngonhoadbmdoemagnfpdphbe_2021.08.17.1300_all_acatmzocbizfck6xlj6bync6egba.crx3"},{"eventresult":1,"eventtype":3,"nextfp":"1.54b93e249d02a0f9061e8f70866d4668a0260db9ae43483810ab78f97f3eaa2a","nextversion":"2021.8.17.1300","previousversion":"0.0.0.0"}],"version":"2021.8.17.1300"}],"arch":"x64","dedup":"cr","hw":{"physmemory":8},"lang":"en-US","nacl_arch":"x86-64","os":{"arch":"x86_64","platform":"Windows","version":"10.0.18363.1734"},"prodversion":"90.0.4430.93","protocol":"3.1","requestid":"{baf962bc-5a17-4370-b92b-17624901a0d8}","sessionid":"{846b5710-80aa-44fc-9bad-b6673c26971d}","updaterversion":"90.0.4430.93"}}",
        BODY_END
    );

    ns_end_transaction("json_2", NS_AUTO_STATUS);
    ns_page_think_time(4.292);

    //Page Auto split for Button 'Purchase Flight' Clicked by User
    ns_start_transaction("confirmation_php");
    ns_web_url ("confirmation_php",
        "URL=https://blazedemo.com/confirmation.php",
        "METHOD=POST",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Origin:https://blazedemo.com",
        "HEADER=Content-Type:application/x-www-form-urlencoded",
        "HEADER=Sec-Fetch-Site:same-origin",
        "HEADER=Sec-Fetch-Mode:navigate",
        "HEADER=Sec-Fetch-User:?1",
        "HEADER=Sec-Fetch-Dest:document",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        BODY_BEGIN,
            "_token=&inputName=as&address=12w&city=as&state=as&zipCode=123&cardType=visa&creditCardNumber=1234&creditCardMonth=11&creditCardYear=2017&nameOnCard=as",
        BODY_END
    );

    ns_end_transaction("confirmation_php", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("json_3");
    ns_web_url ("json_3",
        "URL=https://update.googleapis.com/service/update2/json",
        "METHOD=POST",
        "HEADER=Content-Type:application/json",
        "HEADER=Sec-Fetch-Site:none",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        BODY_BEGIN,
            "{"request":{"@os":"win","@updater":"chromium","acceptformat":"crx2,crx3","app":[{"appid":"jflookgnkcckhobaglndicnbbgbonegd","event":[{"download_time_ms":4022,"downloaded":4054,"downloader":"bits","eventresult":1,"eventtype":14,"nextversion":"2687","previousversion":"2685","total":4054,"url":"http://storage.googleapis.com/update-delta/jflookgnkcckhobaglndicnbbgbonegd/2687/2685/759bc2d33f3824605d3257a8bf8ceb54b6e8120b5210bc78dec3e7069b847f96.crxd"},{"diffresult":1,"eventresult":1,"eventtype":3,"nextfp":"1.87a7864f0923c4a98c227e49dff236f257e13f8e046b3fba6c6338ce6439f043","nextversion":"2687","previousfp":"1.da10ad9f0308e22b48f54d0018aa0ef85c0fa3c30cc5302789bf30b78a301541","previousversion":"2685"}],"version":"2687"}],"arch":"x64","dedup":"cr","hw":{"physmemory":8},"lang":"en-US","nacl_arch":"x86-64","os":{"arch":"x86_64","platform":"Windows","version":"10.0.18363.1734"},"prodversion":"90.0.4430.93","protocol":"3.1","requestid":"{fec31ea6-b3e9-445f-bc2b-22b462ee6b8d}","sessionid":"{846b5710-80aa-44fc-9bad-b6673c26971d}","updaterversion":"90.0.4430.93"}}",
        BODY_END
    );

    ns_end_transaction("json_3", NS_AUTO_STATUS);
    ns_page_think_time(4.107);

}
