#include <cstdint>
#include "rnormal.h"

/************************************************************
 * Tables for normal method                                 *
 ************************************************************/

//const int levels = 256;
//const double R = 3.6554204190269415e+00;

const double ytab[256] = {
	1.0000000000000000e+00, 9.7710143059782095e-01, 9.5987861830851562e-01, 9.4519830763172596e-01,
	9.3205927637968611e-01, 9.1999056461098705e-01, 9.0872536850199470e-01, 8.9809472692918380e-01,
	8.8798334868776641e-01, 8.7830823196574592e-01, 8.6900715699488995e-01, 8.6003198695310978e-01,
	8.5134452455213550e-01, 8.4291382270764226e-01, 8.3471436894220385e-01, 8.2672481886198690e-01,
	8.1892708786231061e-01, 8.1130568410951520e-01, 8.0384720853966984e-01, 7.9653997325589243e-01,
	7.8937370563139786e-01, 7.8233931561090775e-01, 7.7542871038842021e-01, 7.6863464512957491e-01,
	7.6195060148556748e-01, 7.5537068779604666e-01, 7.4888955640601984e-01, 7.4250233462364068e-01,
	7.3620456665171519e-01, 7.2999216442289905e-01, 7.2386136571624671e-01, 7.1780869827208338e-01,
	7.1183094888197318e-01, 7.0592513663134460e-01, 7.0008848962888925e-01, 6.9431842467991323e-01,
	6.8861252945830376e-01, 6.8296854680954944e-01, 6.7738436087972653e-01, 6.7185798481586723e-01,
	6.6638754982419623e-01, 6.6097129540631305e-01, 6.5560756062102155e-01, 6.5029477624233201e-01,
	6.4503145770312464e-01, 6.3981619872977746e-01, 6.3464766558631669e-01, 6.2952459185780096e-01,
	6.2444577371207244e-01, 6.1941006558699740e-01, 6.1441637625712098e-01, 6.0946366523946549e-01,
	6.0455093950318228e-01, 5.9967725045204268e-01, 5.9484169115244379e-01, 5.9004339378279480e-01,
	5.8528152728291638e-01, 5.8055529518449356e-01, 5.7586393360571542e-01, 5.7120670939507590e-01,
	5.6658291841090980e-01, 5.6199188392465382e-01, 5.5743295513706281e-01, 5.5290550579770692e-01,
	5.4840893291904569e-01, 5.4394265557723120e-01, 5.3950611379255586e-01, 5.3509876748313723e-01,
	5.3072009548603483e-01, 5.2636959464053457e-01, 5.2204677892881579e-01, 5.1775117866964926e-01,
	5.1348233976115965e-01, 5.0923982296903536e-01, 5.0502320325687955e-01, 5.0083206915568068e-01,
	4.9666602216963196e-01, 4.9252467621576257e-01, 4.8840765709505002e-01, 4.8431460199287069e-01,
	4.8024515900681930e-01, 4.7619898670008126e-01, 4.7217575367868486e-01, 4.6817513819108891e-01,
	4.6419682774867776e-01, 4.6024051876584526e-01, 4.5630591621844535e-01, 4.5239273331947771e-01,
	4.4850069121095781e-01, 4.4462951867099965e-01, 4.4077895183520305e-01, 4.3694873393150624e-01,
	4.3313861502772033e-01, 4.2934835179101577e-01, 4.2557770725868260e-01, 4.2182645061952939e-01,
	4.1809435700533082e-01, 4.1438120729176953e-01, 4.1068678790835816e-01, 4.0701089065685647e-01,
	4.0335331253773310e-01, 3.9971385558424732e-01, 3.9609232670375538e-01, 3.9248853752586754e-01,
	3.8890230425710903e-01, 3.8533344754175514e-01, 3.8178179232853388e-01, 3.7824716774290618e-01,
	3.7472940696465218e-01, 3.7122834711050628e-01, 3.6774382912160219e-01, 3.6427569765549894e-01,
	3.6082380098257494e-01, 3.5738799088658812e-01, 3.5396812256921334e-01, 3.5056405455837597e-01,
	3.4717564862021288e-01, 3.4380276967450252e-01, 3.4044528571341093e-01, 3.3710306772341292e-01,
	3.3377598961025290e-01, 3.3046392812681824e-01, 3.2716676280380413e-01, 3.2388437588305774e-01,
	3.2061665225349201e-01, 3.1736347938946841e-01, 3.1412474729155271e-01, 3.1090034842955094e-01,
	3.0769017768774126e-01, 3.0449413231221900e-01, 3.0131211186027773e-01, 2.9814401815175418e-01,
	2.9498975522226761e-01, 2.9184922927828738e-01, 2.8872234865396967e-01, 2.8560902376970243e-01,
	2.8250916709230567e-01, 2.7942269309683387e-01, 2.7634951822993359e-01, 2.7328956087470835e-01,
	2.7024274131704862e-01, 2.6720898171338731e-01, 2.6418820605984122e-01, 2.6118034016270419e-01,
	2.5818531161025826e-01, 2.5520304974587293e-01, 2.5223348564236253e-01, 2.4927655207757746e-01,
	2.4633218351120328e-01, 2.4340031606274681e-01, 2.4048088749068891e-01, 2.3757383717278566e-01,
	2.3467910608750270e-01, 2.3179663679656817e-01, 2.2892637342863284e-01, 2.2606826166402719e-01,
	2.2322224872060714e-01, 2.2038828334068372e-01, 2.1756631577903107e-01, 2.1475629779197236e-01,
	2.1195818262754318e-01, 2.0917192501673437e-01, 2.0639748116581977e-01, 2.0363480874977560e-01,
	2.0088386690679932e-01, 1.9814461623394114e-01, 1.9541701878386139e-01, 1.9270103806273065e-01,
	1.8999663902929184e-01, 1.8730378809510681e-01, 1.8462245312601261e-01, 1.8195260344481612e-01,
	1.7929420983525890e-01, 1.7664724454728750e-01, 1.7401168130366909e-01, 1.7138749530799580e-01,
	1.6877466325412471e-01, 1.6617316333710763e-01, 1.6358297526566673e-01, 1.6100408027628005e-01,
	1.5843646114894530e-01, 1.5588010222469717e-01, 1.5333498942496057e-01, 1.5080111027282922e-01,
	1.4827845391636693e-01, 1.4576701115403889e-01, 1.4326677446238811e-01, 1.4077773802608415e-01,
	1.3829989777048285e-01, 1.3583325139684685e-01, 1.3337779842039255e-01, 1.3093354021134279e-01,
	1.2850048003918316e-01, 1.2607862312033538e-01, 1.2366797666948688e-01, 1.2126854995483209e-01,
	1.1888035435751206e-01, 1.1650340343556354e-01, 1.1413771299272141e-01, 1.1178330115245304e-01,
	1.0944018843764303e-01, 1.0710839785638893e-01, 1.0478795499442005e-01, 1.0247888811470471e-01,
	1.0018122826487677e-01, 9.7895009393178856e-02, 9.5620268473704612e-02, 9.3357045641808883e-02,
	9.1105384340662010e-02, 8.8865331480040499e-02, 8.6636937608582931e-02, 8.4420257100894652e-02,
	8.2215348361065074e-02, 8.0022274044366945e-02, 7.7841101299147342e-02, 7.5671902031197974e-02,
	7.3514753193218263e-02, 7.1369737102363023e-02, 6.9236941789315234e-02, 6.7116461382849643e-02,
	6.5008396534478610e-02, 6.2912854888512434e-02, 6.0829951603756559e-02, 5.8759809934131962e-02,
	5.6702561876793782e-02, 5.4658348897885393e-02, 5.2627322747972910e-02, 5.0609646381549314e-02,
	4.8605494997893808e-02, 4.6615057224180828e-02, 4.4638536466256706e-02, 4.2676152458221782e-02,
	4.0728143049248398e-02, 3.8794766275447055e-02, 3.6876302776783471e-02, 3.4973058635058431e-02,
	3.3085368730228132e-02, 3.1213600740953123e-02, 2.9358159954281610e-02, 2.7519495103398628e-02,
	2.5698105528429709e-02, 2.3894550064356816e-02, 2.2109458219764708e-02, 2.0343544449316776e-02,
	1.8597626690654553e-02, 1.6872650919092652e-02, 1.5169724428836647e-02, 1.3490162179793787e-02,
	1.1835553465957126e-02, 1.0207861685006831e-02, 8.6095812030280230e-03, 7.0440001618338249e-03,
	5.5156798328771170e-03, 4.0314406569057762e-03, 2.6028041937556788e-03, 1.2544610762767422e-03
};

const double ktab[256] = {
	0.0000000000000000e+00, 6.9372196347783137e+18, 7.8617803361139323e+18, 8.2550142234406083e+18,
	8.4720263246955151e+18, 8.6092945769774817e+18, 8.7038309202822298e+18, 8.7728480625737533e+18,
	8.8254240813249280e+18, 8.8667948164006595e+18, 8.9001897790050908e+18, 8.9277080442344653e+18,
	8.9507725103753021e+18, 8.9703815853748521e+18, 8.9872563349936466e+18, 9.0019304380375132e+18,
	9.0148072892012913e+18, 9.0261974355110482e+18, 9.0363438147600445e+18, 9.0454391913617623e+18,
	9.0536384644013763e+18, 9.0610675241452442e+18, 9.0678297352432353e+18, 9.0740107565192438e+18,
	9.0796821746151670e+18, 9.0849042784797256e+18, 9.0897282026156861e+18, 9.0941976004506173e+18,
	9.0983499637312737e+18, 9.1022176722930565e+18, 9.1058288363475323e+18, 9.1092079775893617e+18,
	9.1123765839835392e+18, 9.1153535647377705e+18, 9.1181556257955994e+18, 9.1207975815862323e+18,
	9.1232926153051402e+18, 9.1256524973715067e+18, 9.1278877696967332e+18, 9.1300079018465690e+18,
	9.1320214239734804e+18, 9.1339360404525025e+18, 9.1357587274108324e+18, 9.1374958167525868e+18,
	9.1391530688109087e+18, 9.1407357353833943e+18, 9.1422486146036777e+18, 9.1436960988565299e+18,
	9.1450822167439575e+18, 9.1464106699464950e+18, 9.1476848656896236e+18, 9.1489079454147062e+18,
	9.1500828101621463e+18, 9.1512121430983158e+18, 9.1522984295542845e+18, 9.1533439748911544e+18,
	9.1543509204621066e+18, 9.1553212579035136e+18, 9.1562568419557192e+18, 9.1571594019869133e+18,
	9.1580305523705989e+18, 9.1588718018475264e+18, 9.1596845619860910e+18, 9.1604701548409088e+18,
	9.1612298198967429e+18, 9.1619647203744102e+18, 9.1626759489659812e+18, 9.1633645330585498e+18,
	9.1640314394990438e+18, 9.1646775789463245e+18, 9.1653038098516931e+18, 9.1659109421042432e+18,
	9.1664997403734784e+18, 9.1670709271780874e+18, 9.1676251857066445e+18, 9.1681631624132977e+18,
	9.1686854694090107e+18, 9.1691926866669281e+18, 9.1696853640583762e+18, 9.1701640232344852e+18,
	9.1706291593668536e+18, 9.1710812427593441e+18, 9.1715207203419853e+18, 9.1719480170568376e+18,
	9.1723635371447798e+18, 9.1727676653413335e+18, 9.1731607679888507e+18, 9.1735431940717732e+18,
	9.1739152761810463e+18, 9.1742773314131548e+18, 9.1746296622089124e+18, 9.1749725571365151e+18,
	9.1753062916231035e+18, 9.1756311286386657e+18, 9.1759473193357640e+18, 9.1762551036483328e+18,
	9.1765547108524616e+18, 9.1768463600918917e+18, 9.1771302608706857e+18, 9.1774066135153664e+18,
	9.1776756096085975e+18, 9.1779374323963679e+18, 9.1781922571704177e+18, 9.1784402516275784e+18,
	9.1786815762075064e+18, 9.1789163844102267e+18, 9.1791448230947441e+18, 9.1793670327599575e+18,
	9.1795831478088950e+18, 9.1797932967973898e+18, 9.1799976026680361e+18, 9.1801961829703465e+18,
	9.1803891500679137e+18, 9.1805766113333094e+18, 9.1807586693313843e+18, 9.1809354219916708e+18,
	9.1811069627704054e+18, 9.1812733808027720e+18, 9.1814347610458450e+18, 9.1815911844126904e+18,
	9.1817427278980925e+18, 9.1818894646962688e+18, 9.1820314643109468e+18, 9.1821687926581719e+18,
	9.1823015121621074e+18, 9.1824296818441564e+18, 9.1825533574056387e+18, 9.1826725913042739e+18,
	9.1827874328246835e+18, 9.1828979281431071e+18, 9.1830041203865057e+18, 9.1831060496862167e+18,
	9.1832037532262861e+18, 9.1832972652866140e+18, 9.1833866172810004e+18, 9.1834718377901916e+18,
	9.1835529525899807e+18, 9.1836299846744422e+18, 9.1837029542743050e+18, 9.1837718788705055e+18,
	9.1838367732029368e+18, 9.1838976492743465e+18, 9.1839545163493970e+18, 9.1840073809488097e+18,
	9.1840562468385690e+18, 9.1841011150140580e+18, 9.1841419836790907e+18, 9.1841788482196654e+18,
	9.1842117011723520e+18, 9.1842405321871206e+18, 9.1842653279844669e+18, 9.1842860723066092e+18,
	9.1843027458625413e+18, 9.1843153262667069e+18, 9.1843237879709809e+18, 9.1843281021896950e+18,
	9.1843282368173384e+18, 9.1843241563385723e+18, 9.1843158217301484e+18, 9.1843031903542897e+18,
	9.1842862158430228e+18, 9.1842648479729562e+18, 9.1842390325298852e+18, 9.1842087111625984e+18,
	9.1841738212251802e+18, 9.1841342956070451e+18, 9.1840900625498450e+18, 9.1840410454503660e+18,
	9.1839871626483661e+18, 9.1839283271983094e+18, 9.1838644466237348e+18, 9.1837954226529864e+18,
	9.1837211509348383e+18, 9.1836415207324467e+18, 9.1835564145938596e+18, 9.1834657079972055e+18,
	9.1833692689684449e+18, 9.1832669576693647e+18, 9.1831586259532749e+18, 9.1830441168855982e+18,
	9.1829232642262272e+18, 9.1827958918702510e+18, 9.1826618132432128e+18, 9.1825208306467133e+18,
	9.1823727345496771e+18, 9.1822173028200899e+18, 9.1820542998914324e+18, 9.1818834758573814e+18,
	9.1817045654875607e+18, 9.1815172871563766e+18, 9.1813213416758794e+18, 9.1811164110226422e+18,
	9.1809021569472911e+18, 9.1806782194540145e+18, 9.1804442151356314e+18, 9.1801997353481236e+18,
	9.1799443442062193e+18, 9.1796775763793213e+18, 9.1793989346641766e+18, 9.1791078873074637e+18,
	9.1788038650476513e+18, 9.1784862578411725e+18, 9.1781544112327721e+18, 9.1778076223240120e+18,
	9.1774451352868311e+18, 9.1770661363609897e+18, 9.1766697482644470e+18, 9.1762550239344333e+18,
	9.1758209395033661e+18, 9.1753663863977513e+18, 9.1748901624289792e+18, 9.1743909617219871e+18,
	9.1738673633001052e+18, 9.1733178181110508e+18, 9.1727406342386514e+18, 9.1721339599956408e+18,
	9.1714957645327196e+18, 9.1708238155251610e+18, 9.1701156534069934e+18, 9.1693685615095245e+18,
	9.1685795313196268e+18, 9.1677452218959002e+18, 9.1668619122568151e+18, 9.1659254452703867e+18,
	9.1649311612109363e+18, 9.1638738186794230e+18, 9.1627474999749796e+18, 9.1615454972085228e+18,
	9.1602601743977339e+18, 9.1588827993822147e+18, 9.1574033375141396e+18, 9.1558101965205443e+18,
	9.1540899084166236e+18, 9.1522267294591017e+18, 9.1502021322392883e+18, 9.1479941541730785e+18,
	9.1455765523685919e+18, 9.1429176937971988e+18, 9.1399790780735191e+18, 9.1367133417053594e+18,
	9.1330615167984046e+18, 9.1289491954116465e+18, 9.1242810498459136e+18, 9.1189328173190953e+18,
	9.1127392551792425e+18, 9.1054754681132042e+18, 9.0968268863150070e+18, 9.0863388670674289e+18,
	9.0733275677147392e+18, 9.0567118892298353e+18, 9.0346697964444692e+18, 9.0038564689717760e+18,
	8.9573434654261791e+18, 8.8778451737243156e+18, 8.7049928562086779e+18, 8.5811697796087163e+18
};

const double wtab[256] = {
	2.3336712658408143e-20, 3.1027298297807877e-20, 3.6400955415222088e-20, 4.0670984350118286e-20,
	4.4277910075984228e-20, 4.7436132425681247e-20, 5.0267646667173710e-20, 5.2849109356680866e-20,
	5.5232133087468786e-20, 5.7453287507288339e-20, 5.9539522030207488e-20, 6.1511326295639820e-20,
	6.3384679506424611e-20, 6.5172308999397904e-20, 6.6884534055379250e-20, 6.8529849830625315e-20,
	7.0115342495984547e-20, 7.1646991321915855e-20, 7.3129892999858525e-20, 7.4568431215282148e-20,
	7.5966406876910504e-20, 7.7327139551906664e-20, 7.8653547481269675e-20, 7.9948211425357881e-20,
	8.1213426139384990e-20, 8.2451242270713583e-20, 8.3663500757349456e-20, 8.4851861295875036e-20,
	8.6017826075190644e-20, 8.7162759698437515e-20, 8.8287906011214864e-20, 8.9394402400262178e-20,
	9.0483292009588772e-20, 9.1555534230976903e-20, 9.2612013755973871e-20, 9.3653548421924631e-20,
	9.4680896041622071e-20, 9.5694760372059326e-20, 9.6695796350538957e-20, 9.7684614704504658e-20,
	9.8661786023759728e-20, 9.9627844369338607e-20, 1.0058329048152350e-19, 1.0152859463982007e-19,
	1.0246419921971165e-19, 1.0339052098437742e-19, 1.0430795314403001e-19, 1.0521686721089919e-19,
	1.0611761467399833e-19, 1.0701052851452731e-19, 1.0789592457998763e-19, 1.0877410283272234e-19,
	1.0964534848658036e-19, 1.1050993304368177e-19, 1.1136811524178266e-19, 1.1222014192146570e-19,
	1.1306624882128425e-19, 1.1390666130803816e-19, 1.1474159504853346e-19, 1.1557125662846142e-19,
	1.1639584412340603e-19, 1.1721554762644147e-19, 1.1803054973630227e-19, 1.1884102600968670e-19,
	1.1964714538088401e-19, 1.2044907055158866e-19, 1.2124695835347561e-19, 1.2204096008585551e-19,
	1.2283122183050069e-19, 1.2361788474553177e-19, 1.2440108534007492e-19, 1.2518095573123913e-19,
	1.2595762388482041e-19, 1.2673121384101129e-19, 1.2750184592627933e-19, 1.2826963695247521e-19,
	1.2903470040413896e-19, 1.2979714661488831e-19, 1.3055708293369955e-19, 1.3131461388182227e-19,
	1.3206984130100852e-19, 1.3282286449368166e-19, 1.3357378035561961e-19, 1.3432268350168181e-19,
	1.3506966638506785e-19, 1.3581481941055793e-19, 1.3655823104215149e-19, 1.3729998790548883e-19,
	1.3804017488541204e-19, 1.3877887521899626e-19, 1.3951617058435787e-19, 1.4025214118552494e-19,
	1.4098686583363556e-19, 1.4172042202471135e-19, 1.4245288601423692e-19, 1.4318433288876086e-19,
	1.4391483663472003e-19, 1.4464447020467589e-19, 1.4537330558114002e-19, 1.4610141383815522e-19,
	1.4682886520078883e-19, 1.4755572910268546e-19, 1.4828207424181849e-19, 1.4900796863457170e-19,
	1.4973347966827555e-19, 1.5045867415231633e-19, 1.5118361836793030e-19, 1.5190837811678957e-19,
	1.5263301876848229e-19, 1.5335760530698380e-19, 1.5408220237621294e-19, 1.5480687432476316e-19,
	1.5553168524989480e-19, 1.5625669904087208e-19, 1.5698197942172600e-19, 1.5770758999352137e-19,
	1.5843359427620456e-19, 1.5916005575010672e-19, 1.5988703789717549e-19, 1.6061460424200740e-19,
	1.6134281839275137e-19, 1.6207174408195380e-19, 1.6280144520741468e-19, 1.6353198587312370e-19,
	1.6426343043034581e-19, 1.6499584351892507e-19, 1.6572929010887681e-19, 1.6646383554233775e-19,
	1.6719954557594549e-19, 1.6793648642371890e-19, 1.6867472480051298e-19, 1.6941432796612270e-19,
	1.7015536377011239e-19, 1.7089790069744900e-19, 1.7164200791502012e-19, 1.7238775531911977e-19,
	1.7313521358398828e-19, 1.7388445421149511e-19, 1.7463554958205754e-19, 1.7538857300689133e-19,
	1.7614359878169384e-19, 1.7690070224186465e-19, 1.7765995981937346e-19, 1.7842144910139044e-19,
	1.7918524889079965e-19, 1.7995143926872314e-19, 1.8072010165918905e-19, 1.8149131889608529e-19,
	1.8226517529254763e-19, 1.8304175671294004e-19, 1.8382115064759390e-19, 1.8460344629048328e-19,
	1.8538873462002374e-19, 1.8617710848319400e-19, 1.8696866268319276e-19, 1.8776349407085625e-19,
	1.8856170164007673e-19, 1.8936338662747913e-19, 1.9016865261662906e-19, 1.9097760564706541e-19,
	1.9179035432847060e-19, 1.9260700996031359e-19, 1.9342768665732515e-19, 1.9425250148119105e-19,
	1.9508157457887686e-19, 1.9591502932802913e-19, 1.9675299248993182e-19, 1.9759559437053284e-19,
	1.9844296899009623e-19, 1.9929525426207857e-19, 2.0015259218187679e-19, 2.0101512902614614e-19,
	2.0188301556344436e-19, 2.0275640727702120e-19, 2.0363546460064079e-19, 2.0452035316840018e-19,
	2.0541124407959022e-19, 2.0630831417973642e-19, 2.0721174635905853e-19, 2.0812172986969811e-19,
	2.0903846066318678e-19, 2.0996214174976310e-19, 2.1089298358129697e-19, 2.1183120445974679e-19,
	2.1277703097326005e-19, 2.1373069846223412e-19, 2.1469245151788296e-19, 2.1566254451611154e-19,
	2.1664124218978567e-19, 2.1762882024280397e-19, 2.1862556600973762e-19, 2.1963177916520472e-19,
	2.2064777248759897e-19, 2.2167387268230012e-19, 2.2271042127006990e-19, 2.2375777554698427e-19,
	2.2481630962299007e-19, 2.2588641554700814e-19, 2.2696850452745401e-19, 2.2806300825812974e-19,
	2.2917038036067604e-19, 2.3029109795618858e-19, 2.3142566338022620e-19, 2.3257460605730570e-19,
	2.3373848455313323e-19, 2.3491788882531140e-19, 2.3611344269615059e-19, 2.3732580657456982e-19,
	2.3855568045798935e-19, 2.3980380724969776e-19, 2.4107097643255258e-19, 2.4235802814620239e-19,
	2.4366585772249740e-19, 2.4499542074262295e-19, 2.4634773869004480e-19, 2.4772390528596755e-19,
	2.4912509360914101e-19, 2.5055256412008600e-19, 2.5200767373188754e-19, 2.5349188609655594e-19,
	2.5500678330878112e-19, 2.5655407926924217e-19, 2.5813563499947906e-19, 2.5975347626228836e-19,
	2.6140981391908902e-19, 2.6310706755324891e-19, 2.6484789301201666e-19, 2.6663521467761592e-19,
	2.6847226348131367e-19, 2.7036262193809077e-19, 2.7231027782505116e-19, 2.7431968858356360e-19,
	2.7639585913549208e-19, 2.7854443662841966e-19, 2.8077182675212707e-19, 2.8308533783013681e-19,
	2.8549336108392794e-19, 2.8800559859743961e-19, 2.9063335505152439e-19, 2.9338991601318868e-19,
	2.9629104569962646e-19, 2.9935565278969289e-19, 3.0260669765992010e-19, 3.0607245488864405e-19,
	3.0978831310979796e-19, 3.1379941382384481e-19, 3.1816464958768768e-19, 3.2296296396767435e-19,
	3.2830376160985927e-19, 3.3434515434101033e-19, 3.4132843996361357e-19, 3.4965008598178777e-19,
	3.6003451672653374e-19, 3.7404710590204683e-19, 3.9632147596568829e-19, 4.2598159841951298e-19
};