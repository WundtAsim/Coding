#!/usr/bin/python
# Filename: backup_ver1.py
import os
import time
import zipfile
import tarfile

source = [r'C:\Users\yangqi\Desktop\MPractice\Python\Clock.py', r'C:\Users\yangqi\Desktop\MPractice\Python\math.py']

target_dir = r'D:\Backup'

target = target_dir + os.sep + time.strftime('%Y%m%d%H%M%S') + '.zip'

zip_command = "zip -qr {0} {1}".format(target, ' '.join(source))

# Run the backup
f = zipfile.ZipFile(target, 'w', zipfile.ZIP_DEFLATED)
for file in source:
    print('compressing', file)
    f.write(file)
f.close()
print('compressed already')
if os.path.exists(target):
    print('Successful backup to', target)
else:
    print('Backup FAILED')
