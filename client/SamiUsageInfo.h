/*
 * SamiUsageInfo.h
 * 
 * 
 */

#ifndef SamiUsageInfo_H_
#define SamiUsageInfo_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiUsageInfo: public SamiObject {
public:
    SamiUsageInfo();
    SamiUsageInfo(String* json);
    virtual ~SamiUsageInfo();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiUsageInfo* fromJson(String* obj);

    Long* getPCount();
    void setPCount(Long* pCount);
    Long* getPDate();
    void setPDate(Long* pDate);
    String* getPMethod();
    void setPMethod(String* pMethod);
    String* getPUrl();
    void setPUrl(String* pUrl);

private:
    Long* pCount;
Long* pDate;
String* pMethod;
String* pUrl;
};

} /* namespace Swagger */

#endif /* SamiUsageInfo_H_ */
