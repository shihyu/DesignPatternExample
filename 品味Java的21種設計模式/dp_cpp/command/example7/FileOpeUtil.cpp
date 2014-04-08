#include "FileOpeUtil.h"

namespace cn {
namespace javass {
namespace dp {
namespace command {
namespace example7 {

FileOpeUtil::FileOpeUtil() {
}

std::vector FileOpeUtil::readFile(std::string pathName) {
    std::vector list = std::vector();
    ObjectInputStream *oin = 0;

    try {
        File *f = new File(pathName);

        if (f->exists()) {
            oin = new ObjectInputStream(new BufferedInputStream(new FileInputStream(f)));
            list = static_cast<std::vector *>(oin->readObject());
        }
    } catch (Exception *e) {
        e->printStackTrace();
    }

    //JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to the exception 'finally' clause:
    finally {
        try
        {
            if (oin != 0) {
                oin->close();
            }
        } catch (IOException *e) {
            e->printStackTrace();
        }
    }
    return list;
}

void FileOpeUtil::writeFile(std::string pathName, std::vector list) {
    File *f = new File(pathName);
    ObjectOutputStream *oout = 0;

    try {
        oout = new ObjectOutputStream(new BufferedOutputStream(new FileOutputStream(f)));
        oout->writeObject(list);
    } catch (IOException *e) {
        e->printStackTrace();
    }

    //JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to the exception 'finally' clause:
    finally {
        try
        {
            oout->close();
        } catch (IOException *e) {
            e->printStackTrace();
        }
    }
}
}
}
}
}
}
