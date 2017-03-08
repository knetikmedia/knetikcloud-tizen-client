/*
 * SamiVersion.h
 * 
 * 
 */

#ifndef SamiVersion_H_
#define SamiVersion_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::String;


namespace Swagger {

class SamiVersion: public SamiObject {
public:
    SamiVersion();
    SamiVersion(String* json);
    virtual ~SamiVersion();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiVersion* fromJson(String* obj);

    String* getPVersion();
    void setPVersion(String* pVersion);

private:
    String* pVersion;
};

} /* namespace Swagger */

#endif /* SamiVersion_H_ */
